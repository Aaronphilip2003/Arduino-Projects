// C++ code
//
void setup()
{
  pinMode(8, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(1, OUTPUT);
}

void loop()
{
  digitalWrite(8, HIGH);
  digitalWrite(3, LOW);
  digitalWrite(1, LOW);
  delay(2000); // Wait for 1000 millisecond(s)
  digitalWrite(8, LOW);
  digitalWrite(3, HIGH);
  digitalWrite(1, LOW);
  delay(2000); // Wait for 1000 millisecond(s)
  digitalWrite(8, LOW);
  digitalWrite(3, LOW);
  digitalWrite(1, HIGH);
  delay(2000);
}
