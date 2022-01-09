// C++ code
//
int US = 0;

long readUltrasonicDistance(int triggerPin, int echoPin)
{
  pinMode(triggerPin, OUTPUT);  // Clear the trigger
  digitalWrite(triggerPin, LOW);
  delayMicroseconds(2);
  // Sets the trigger pin to HIGH state for 10 microseconds
  digitalWrite(triggerPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(triggerPin, LOW);
  pinMode(echoPin, INPUT);
  // Reads the echo pin, and returns the sound wave travel time in microseconds
  return pulseIn(echoPin, HIGH);
}

void setup()
{
  pinMode(5,OUTPUT);
  pinMode(6,OUTPUT);
  Serial.begin(9600);

  pinMode(13, OUTPUT);
}


void loop()
{
  US = 0.01723 * readUltrasonicDistance(11, 10);
  Serial.println(US);
  delay(100); // Wait for 100 millisecond(s)
  if (US<=10){
    digitalWrite(5,LOW);
    digitalWrite(6,LOW);
  }
  else{
    analogWrite(9,US);
    digitalWrite(5,HIGH);
    digitalWrite(6,LOW);
  }
  
}
