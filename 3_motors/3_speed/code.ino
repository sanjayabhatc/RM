// C++ code
//
int potn=0;
void setup()
{
  pinMode(A0, INPUT);
  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);
  Serial.begin(9600);
}

void loop()
{
  potn=analogRead(A0);
  int output=potn/4;
  analogWrite(6,output);
  Serial.println(output);
}