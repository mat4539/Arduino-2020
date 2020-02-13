int serial = 0;
int motor = 7;
void setup () {
 pinMode(motor,OUTPUT);
 pinMode(serial,INPUT);
 Serial.begin(9600);
}

void loop () {
 int sensorValue;
 sensorValue = analogRead(serial);
 delay(1000);
 float digitalValue = map(sensorValue, 0, 1023, 0, 179);
 Serial.println(digitalValue);
 analogWrite(motor,digitalValue);
 
}
