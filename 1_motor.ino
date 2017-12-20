#define M_PIN1 5
#define M_PIN2 6
#define M_PWM1 7

void setup() {
  Serial.begin(9600);
  Serial.println("hello, arduino!");
  pinMode(M_PIN1, OUTPUT);
  pinMode(M_PIN2, OUTPUT);
  pinMode(M_PWM1, OUTPUT);
}

void loop() {
  digitalWrite(M_PIN1, HIGH);
  digitalWrite(M_PIN2, LOW);
  analogWrite(M_PWM1, 200);

  delay(1000);
  analogWrite(M_PWM1, 0);
  delay(1000);
}
