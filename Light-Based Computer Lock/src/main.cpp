#include <Arduino.h>
#include <Keyboard.h>
//comment out the first line and save as .ino if not using platformio

const int LIGHT = A1;
const int THRESHOLD = 500;

void setup() {
  Keyboard.begin();
  pinMode(LIGHT, INPUT);
}

void loop() {
  int brightness = analogRead(LIGHT);
  if (brightness > THRESHOLD)
  {
    Keyboard.press(KEY_LEFT_GUI);
    Keyboard.press('l');
    delay(100);
    Keyboard.releaseAll();
  }
}