#include <Servo.h>
Servo matServo;  

int const potPin = A0;  
int potVal;
int servangle;    

void setup() {
  matServo.attach(6); 
  Serial.begin(9600); 
}

void loop() {
  potVal = analogRead(potPin); 
  Prints(); 
  servangle = map(potVal, 0, 1023, 0, 180);
  matServo.write(servangle);
  delay(15);
}

void Prints(){
  Serial.print("potVal: ");
  Serial.print(potVal);
  Serial.print(", angle: ");
  Serial.println(servangle);
  

}
