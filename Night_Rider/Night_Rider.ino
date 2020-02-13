const int leds[] = {1,2,3,4,5}; // Led pins
const int totalLeds = 5;
int time = 50; // Default speed

void setup() {
    // Initialize all outputs
    for(int i = 0; i <= totalLeds; ++i) {
        pinMode(leds[i], OUTPUT);
    }
}

void loop() {
    for(int i = 0; i < totalLeds - 1; ++i) {
        // Scan left to right
        time = analogRead(2);
        digitalWrite(leds[i], HIGH);
        delay(time);
        digitalWrite(leds[i + 1], HIGH);
        delay(time);
        digitalWrite(leds[i], LOW);
    }
    for(int i = totalLeds; i > 0; --i) {
        // Scan right to left
        time = analogRead(2);
        digitalWrite(leds[i], HIGH);
        delay(time);
        digitalWrite(leds[i - 1], HIGH);
        delay(time);
        digitalWrite(leds[i], LOW);
    }
}
