int US = 0;
#include<Servo.h>
Servo myservo;		
int servoPin=2;	
int sensorValue = 0;

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
  myservo.attach(servoPin);
  Serial.begin(9600);
  pinMode(A0, INPUT);
  pinMode(4, OUTPUT);
}

void loop()
{
  sensorValue = analogRead(A0);
  US = 0.01723 * readUltrasonicDistance(11, 10);
  Serial.println(US);
  delay(100); // Wait for 100 millisecond(s)
  if (US < 100) 
  {
    digitalWrite(4, HIGH);
    delay(sensorValue);
    myservo.write(60);
    delay(100);
  }
  else 
  {
    digitalWrite(4, LOW);
    delay(sensorValue);
    myservo.write(1);
    delay(100);
  }
}