#include <Stepper.h>

const int stepsPerRevolution = 200;  

Stepper myStepper(stepsPerRevolution, 4, 5, 6, 7);

int stepCount = 0;  

void setup() {
}

void loop() {
  int sensorReading = analogRead(A0);
  int motorSpeed = map(sensorReading, 0, 1023, 0, 100);
  if (motorSpeed > 0) {
    myStepper.setSpeed(motorSpeed);
    myStepper.step(stepsPerRevolution / 100);
  }
}
