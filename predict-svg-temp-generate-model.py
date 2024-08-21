import pandas as pd
import matplotlib.pyplot as plt
import numpy as np
from sklearn.preprocessing import StandardScaler, LabelEncoder
from sklearn.model_selection import train_test_split
from sklearn.svm import SVC
from sklearn.metrics import classification_report, accuracy_score
import time
import joblib
import micromlgen

file_path = 'dataset/forecasting_rainfall_dataset.xlsx'  # Replace with your file path
data = pd.read_excel(file_path)

# Categorize 'Suhu Rata-rata (°C)' into 3 classes: Low, Medium, High
# You can adjust the bin edges according to your needs
bins = [data['Suhu Rata-rata (°C)'].min(), 24, 28, data['Suhu Rata-rata (°C)'].max()]
labels = ['Low', 'Medium', 'High']
data['Suhu_Categories'] = pd.cut(data['Suhu Rata-rata (°C)'], bins=bins, labels=labels)

# Encode the categorical temperature labels
label_encoder = LabelEncoder()
data['Suhu_Categories'] = label_encoder.fit_transform(data['Suhu_Categories'])

# Encode other categorical features
data['Curah Hujan (Kategori)'] = label_encoder.fit_transform(data['Curah Hujan (Kategori)'])
data['Arah Angin Terbanyak (deg)'] = label_encoder.fit_transform(data['Arah Angin Terbanyak (deg)'])

# Define features and target variable
features = ['Suhu Minimum (°C)', 'Suhu Maksimum (°C)', 'Curah Hujan (mm)',
            'Curah Hujan (Kategori)', 'Kategori Hujan (num)', 'Arah Angin Terbanyak (deg)']
X = data[features]
y = data['Suhu_Categories']

# Split the data into training and testing sets (80% train, 20% test)
X_train, X_test, y_train, y_test = train_test_split(X, y, test_size=0.2, random_state=42, shuffle=False)

# Standardize the data (important for SVM)
scaler = StandardScaler()
X_train_scaled = scaler.fit_transform(X_train)
X_test_scaled = scaler.transform(X_test)
# Initialize the SVC model
svc_model = SVC(kernel='rbf', C=1.0, gamma=0.001)

# Train the model
svc_model.fit(X_train_scaled, y_train)

# Predict on the test set
y_pred = svc_model.predict(X_test_scaled)

# Evaluate the model
# Specify the labels parameter to include all possible classes, even if they aren't predicted
accuracy = accuracy_score(y_test, y_pred)
classification_report_str = classification_report(y_test, y_pred, labels=[0, 1, 2], target_names=labels)

print(f"Accuracy: {accuracy}")
print(f"Classification Report:\n{classification_report_str}")

joblib.dump(svc_model, 'SVMClassifierHujan.pkl')
with open('SVMClassifierHujan.h', 'w') as file:
    file.write(micromlgen.port(svc_model))

X_test.to_csv('X_test-SVMClassifierHujan.csv', index=False)
