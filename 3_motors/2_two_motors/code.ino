// C++ code
//
void setup()
{
  pinMode(9, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);
  
}

void loop()
{
  digitalWrite(9, HIGH);
  digitalWrite(10, LOW);
  digitalWrite(6, HIGH);
  digitalWrite(5, LOW);
}