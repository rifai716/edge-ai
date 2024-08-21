import joblib
import time
import pandas as pd
import numpy as np
import serial

# Impor model dari file
svc_model = joblib.load('SVMClassifierHujan.pkl')

# hasil = svc_model.predict([[24.8, 33.0, 0.0, 4.0, 0.0, 1.0]])
# print(hasil)

# Load the CSV file
X_test = pd.read_csv('X_test-SVMClassifierHujan.csv')

# Define the labels for the predicted classes
labels = ['Low', 'Medium', 'High']

out = []

# Predict the results for each row in X_test
for i in range(0, 10):
    start_time = time.time()
    hasil = svc_model.predict([X_test.values[i]])
    end_time = time.time()
    execution_time = end_time - start_time
    print(f"Data ke-{i+1}: {X_test.values[i]}, Prediksi: {labels[hasil[0]]}, Waktu eksekusi: {execution_time:.6f} detik")
    out.append([i+1, X_test.values[i], hasil[0], execution_time])

# print(out)

ser = serial.Serial('/dev/cu.usbserial-0001', 115200, timeout=1)  # Ganti 'COM3' dengan port yang sesuai di komputer Anda
time.sleep(2)

for i in range(0, 10):
    data_array = np.array(X_test.values[i])
    data_string = ",".join(map(str, data_array))
    # print(data_string)
    ser.write(data_string.encode())
    while ser.in_waiting == 0:
        pass  # Tunggu sampai ada data masuk

    # Baca respons dari Arduino
    response = ser.readline().decode().strip()
    print(f"Arduino Response: {response}")
    arr = response.split(";")
    out[i].append([arr[0], arr[1]])

    # Berikan jeda jika perlu
    time.sleep(1)

ser.close()
print("-----OUTPUT-----")
print(out)
print("-------SELESAI--------")

