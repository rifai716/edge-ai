import joblib
import time
import pandas as pd
import numpy as np
import serial

# Impor model dari file
svc_model = joblib.load('SVMClassifierHujan.pkl')

# Load the CSV file
X_test = pd.read_csv('X_test-SVMClassifierHujan.csv')
y_test = pd.read_csv('y_test-SVMClassifierHujan.csv')

# Define the labels for the predicted classes
labels = ['Low', 'Medium', 'High']

out = []

# Predict the results for each row in X_test
for i in range(0, 10):
    start_time = time.time()
    hasil = svc_model.predict([X_test.values[i]])
    end_time = time.time()
    execution_time = end_time - start_time
    out.append([i+1, X_test.values[i], y_test.values[i][0], int(hasil[0]), execution_time])

# Buka komunikasi serial
ser = serial.Serial('/dev/cu.usbserial-0001', 115200, timeout=1)  # Ganti dengan port yang sesuai di komputer Anda
time.sleep(2)

# Kirim data dan terima respons dari Arduino
for i in range(0, 10):
    data_array = np.array(X_test.values[i])
    data_string = ",".join(map(str, data_array))

    # Kirim data_string melalui serial
    ser.write(data_string.encode())

    # Tunggu sampai ada respons dari Arduino
    while ser.in_waiting == 0:
        pass

    # Baca respons dari Arduino
    response = ser.readline().decode().strip()
    arr = response.split(";")  # Pecah respons menjadi bagian-bagian

    # Tambahkan hasil respons Arduino ke elemen out yang sesuai
    out[i].append(int(arr[0]))
    out[i].append(float(arr[1]))  # Pastikan format sesuai, int untuk prediksi dan float untuk waktu

# Tutup serial
ser.close()

# Cetak hasil akhir
print("-----OUTPUT-----")
for entry in out:
    print(entry)

df = pd.DataFrame(out, columns=['Data ke', 'Input Data', 'Actual Class', 'Predicted Class', 'Execution Time', 'Arduino Prediction', 'Arduino Execution Time'])

# Save the DataFrame to a CSV file
df.to_csv('output.csv', index=False)

print("-------SELESAI--------")