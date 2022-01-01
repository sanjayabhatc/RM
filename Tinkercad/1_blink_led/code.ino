// C++ code
//
void setup()
{
  pinMode(4, OUTPUT);
}

void loop()
{
  digitalWrite(4, HIGH);
  delay(1000); // Wait for 1000 millisecond(s)
  digitalWrite(4, LOW);
  delay(1000); // Wait for 2000 millisecond(s)
  digitalWrite(4, HIGH);
  delay(2000); // Wait for 3000 millisecond(s)
  digitalWrite(4, LOW);
  delay(1000);
  digitalWrite(4,HIGH);
  delay(3000);
  digitalWrite(4,LOW);
  delay(1000);
}