// C++ code
//
void setup()
{
  pinMode(4, OUTPUT); //for red led
  pinMode(3, OUTPUT); //for orange led
  pinMode(2, OUTPUT); //for green led
}
void loop()
{
  digitalWrite(4,HIGH); //turn on red led
  delay(3000);  //wait for 3 seconds
  digitalWrite(4,LOW); //turn off red light 
  
  digitalWrite(3,HIGH); //turn on orange led
  delay(1000);  //wait for 1 seconds
  digitalWrite(3,LOW); //turn off orange light 
  
  digitalWrite(2,HIGH); //turn on green led
  delay(3000);  //wait for 3 seconds
  digitalWrite(2,LOW); //turn off green light 
}