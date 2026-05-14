#include <Servo.h>

Servo doorLock;

int sensorPin = 7;

void setup() {

  pinMode(sensorPin, INPUT);

  doorLock.attach(9);

  Serial.begin(9600);
}

void loop() {

  int sensorValue = digitalRead(sensorPin);

  if(sensorValue == HIGH) {

    Serial.println("Door Unlocked");

    doorLock.write(90);

    delay(3000);

  }
  else {

    Serial.println("Door Locked");

    doorLock.write(0);
  }

  delay(500);
}
