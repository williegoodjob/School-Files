#include <Arduino.h>

void setup() {
  Serial.begin(115200);
}

void loop() {
  char buffer[5]; // 用來存放讀取的字元
  while (Serial.available() < 4); // 等待至少有4個字元可讀取
  Serial.readBytes(buffer, 4); // 一次讀取4個字元
  buffer[4] = '\0'; // 確保字串結尾

  if (strcmp(buffer, "ABCD") == 0) {
    Serial.write(0xAB);
    Serial.write(0xCD);
    delay(1000);
    Serial.println("ABCD");
  }
}