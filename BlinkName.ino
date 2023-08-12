void setup() {
  pinMode(LED_BUILTIN, OUTPUT);
}

void Dot()
{
  digitalWrite(LED_BUILTIN, HIGH);
  delay(200);
  digitalWrite(LED_BUILTIN, LOW);
  delay(900);
}
void Dash()
{
  digitalWrite(LED_BUILTIN, HIGH);
  delay(800);
  digitalWrite(LED_BUILTIN, LOW);
  delay(900);
}

void loop() {
  //name-VANSH
  //Morse Code - (V)..._  (A)._  (N)_.  (S)...  (H)....

  //For V
  Dot();
  Dot();
  Dot();
  delay(1500);

  //for A
  Dot();
  Dash();
  delay(1500);

  //for N
  Dash();
  Dot();
  delay(1500);

  //for S
  Dot();
  Dot();
  Dot();
  delay(1500);

  //for H
  Dot();
  Dot();
  Dot();
  Dot();
  delay(1500);
}
