#define PIN1 7
#define PIN2 8
#define PWM1 9

void setup() {
  Serial.begin(9600);
  Serial.println("hello, arduino!");
  pinMode(PIN1, OUTPUT);
  pinMode(PIN2, OUTPUT);
  pinMode(PWM1, OUTPUT);
}

void loop() {
  digitalWrite(PIN1, HIGH);
  digitalWrite(PIN2, LOW);
  analogWrite(PWM1, 200);

  delay(1000);
  analogWrite(PWM1, 0);
  delay(1000);
}
