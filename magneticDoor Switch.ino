const int switchReed = 2; // Pin connected to the reed switch
const int led = 3;     // LED pin

void setup() {
    pinMode(switchReed, INPUT_PULLUP);
    pinMode(led, OUTPUT);
    Serial.begin(9600);
}

void loop() {
    int state = digitalRead(switchReed);
    if (state == LOW) {
        digitalWrite(led, LOW);
        Serial.println("Your Door is Closed");
    } else {
        digitalWrite(led, HIGH);
        Serial.println("Your Door is Open");
    }
    delay(100); // Adjust the delay as needed
}
