#include<Servo.h>

Servo myservo;		//create servo object to control the servo
int servoPin=2;		/*connect yelloe servo wire to digital 
					GPIO pin 2*/
int val=0;
void setup()
{
  //attach servo to the PWM(Pulse with modulation) pin
  myservo.attach(servoPin);
  Serial.begin(9600);
}
void loop()
{
  //if data is available to read, read it and store it in val
  Serial.println("Enter angle: ");
  if (Serial.available()) {
    val=Serial.read();
    /*read value and converts to ASCII value
    i.e, ascii value of 1=48, which means 48 degrees
    ex: 13=60 degrees */
  }
  Serial.println(val);
  myservo.write(val);		//set the servo position
  delay(15);
}
