void setup() {
  pinMode(11, INPUT);
  pinMode(2, OUTPUT);
}
void loop() {
  if(digitalRead(11) == HIGH)digitalWrite(2, HIGH);
  else digitalWrite(2, LOW);
}
