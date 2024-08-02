#include "SVMHujan.h"
Eloquent::ML::Port::SVM classifier;

void setup() {
  Serial.begin(115200);
}

void loop() {
  float X_1[] = { 30.0, 70.0, 10.0 };
  int result_1 = classifier.predict(X_1);
  Serial.print("Result of predict with input X1:");
  Serial.println(result_1);
  delay(2000);
  float X_2[] = { 26.0, 72.0, 11.0 };
  int result_2 = classifier.predict(X_2);
  Serial.print("Result of predict with input X2:");
  Serial.println(result_2);
  delay(2000);
}
