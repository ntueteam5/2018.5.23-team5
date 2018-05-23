// these constants won't change:
const int analogPin = A0;   // the pin that the potentiometer is attached to
const int ledCount = 10;
int ledPins[] = {
  2, 3, 4, 5, 6, 7, 8, 9, 10, 11
};   // an array of pin numbers to which LEDs are attached


void setup() {
  // loop over the pin array and set them all to output:
  for (int thisLed = 0; thisLed < ledCount; thisLed++) {
    pinMode(ledPins[thisLed], OUTPUT);
  }
}

void loop() {
  // loop over the LED array:
  for (int thisLed = 0; thisLed < ledCount; thisLed++) {
    // if the array element's index is less than ledLevel,
    // turn the pin for this element on:
      digitalWrite(ledPins[thisLed], HIGH);
      digitalWrite(ledPins[9-thisLed], HIGH);
      delay(60);
    // turn off all pins higher than the ledLevel:
      digitalWrite(ledPins[thisLed], LOW);
      digitalWrite(ledPins[9-thisLed], LOW);
  }
    for (int thisLed = ledCount; thisLed >ledCount; thisLed--) {
    // if the array element's index is less than ledLevel,
    // turn the pin for this element on:
      digitalWrite(ledPins[thisLed], HIGH);
      digitalWrite(ledPins[9-thisLed], HIGH);
      delay(60);
      digitalWrite(ledPins[thisLed], LOW);
      digitalWrite(ledPins[9-thisLed], LOW);      
    // turn off all pins higher than the ledLevel:
    }
}
