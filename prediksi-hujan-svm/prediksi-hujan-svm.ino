#include "SVMClassifierHujan.h"
Eloquent::ML::Port::SVM classifier;

// String labels[] = {"Low", "Medium", "High"};
String data;

void setup() {
  Serial.begin(115200);
}

void loop() {
  if (Serial.available()) {
    data = "";
    while (Serial.available() > 0) {
      data += (char)Serial.read();
      delay(1);
    }
    float X_1[6]; 
    int index = 0;
    char* token = strtok((char*)data.c_str(), ","); // pisahkan dengan koma (split by ,)
    while (token != NULL && index < 6) {  // Sesuaikan jumlah elemen yang diharapkan
      X_1[index] = atof(token);  // Konversi string menjadi float
      token = strtok(NULL, ",");  // Ambil elemen berikutnya
      index++;
    }

    // Lakukan prediksi
    long startTime = millis();
    int result = classifier.predict(X_1);
    long intervalTime = millis() - startTime;
    // Konversi millis() ke detik
    float intervalTimeSeconds = intervalTime / 1000.0;

    // Kirim hasil dan waktu eksekusi melalui Serial
    Serial.print(result);
    Serial.print(";");
    Serial.println(intervalTimeSeconds, 6);
  }
  delay(1000);
}
