int motorA = 12;
int motorB = 13;
void setup() {
  // put your setup code here, to run once:
  pinMode (motorA, OUTPUT);
  pinMode (motorB, OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
  analogWrite (motorA, 255);
  analogWrite (motorB, 0);

}
