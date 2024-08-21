#include "SVM.h"
Eloquent::ML::Port::SVM classifier;

void setup() {
  Serial.begin(115200);
}

void loop() {
  float X_1[] = { 24.6, 34.4, 0.0, 4.0, 0.0, 1.0 };
  int result_1 = classifier.predict(X_1);
  Serial.print("Result of predict with input X1:");
  Serial.println(result_1);
  delay(2000);
  float X_2[] = { 24.8, 33.0, 0.0, 4.0, 0.0, 1.0 };
  int result_2 = classifier.predict(X_2);
  Serial.print("Result of predict with input X2:");
  Serial.println(result_2);
  delay(2000);
}
