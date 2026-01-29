
#define RLED_PIN 13
#define GLED_PIN 33
#define YLED_PIN 32

void setup() {
  // put your setup code here, to run once:
  pinMode(RLED_PIN, OUTPUT);
  pinMode(GLED_PIN, OUTPUT);
  pinMode(YLED_PIN,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:

digitalWrite(RLED_PIN, HIGH);
digitalWrite(YLED_PIN, LOW);
digitalWrite(GLED_PIN, LOW);
delay(2000);
digitalWrite(RLED_PIN, HIGH);
digitalWrite(YLED_PIN, HIGH);
digitalWrite(GLED_PIN, LOW);
delay(2000);
digitalWrite(RLED_PIN, LOW);
digitalWrite(YLED_PIN, LOW);
digitalWrite(GLED_PIN, HIGH);
delay(2000);
digitalWrite(RLED_PIN, LOW);
digitalWrite(YLED_PIN, HIGH);
digitalWrite(GLED_PIN, LOW);
delay(2000);
}