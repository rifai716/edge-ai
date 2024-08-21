import joblib
import time
import pandas as pd

# Impor model dari file
svc_model = joblib.load('SVMClassifierHujan.pkl')

# hasil = svc_model.predict([[24.8, 33.0, 0.0, 4.0, 0.0, 1.0]])
# print(hasil)

# Load the CSV file
X_test = pd.read_csv('X_test-SVMClassifierHujan.csv')

# Define the labels for the predicted classes
labels = ['Low', 'Medium', 'High']

# Predict the results for each row in X_test
for i in range(0, len(X_test)):
    start_time = time.time()
    hasil = svc_model.predict([X_test.values[i]])
    end_time = time.time()
    execution_time = end_time - start_time
    print(f"Data ke-{i+1}: {X_test.values[i]}, Prediksi: {labels[hasil[0]]}, Waktu eksekusi: {execution_time:.6f} detik")