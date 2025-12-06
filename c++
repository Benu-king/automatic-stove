// ------------------------------------------------------------
// Relay & LED Controller via Serial Commands
// Author: Benayas Wondwosen
// ------------------------------------------------------------

const int relayPin = 9;
const int ledPin = 10;

String inputString = "";

void setup() {
  pinMode(relayPin, OUTPUT);
  pinMode(ledPin, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  if (Serial.available() > 0) {
    inputString = Serial.readStringUntil('\n');
    inputString.trim();

    if (inputString == "on") {
      digitalWrite(relayPin, HIGH);

      for (int i = 0; i < 5; i++) {
        digitalWrite(ledPin, HIGH);
        delay(300);
        digitalWrite(ledPin, LOW);
        delay(300);
      }
    }

    else if (inputString == "off") {
      digitalWrite(relayPin, LOW);
      digitalWrite(ledPin, LOW);
    }
  }
}
