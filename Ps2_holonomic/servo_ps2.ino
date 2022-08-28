#include<Servo.h>
#include <Cytron_PS2Shield.h>
Cytron_PS2Shield ps2(0,1);

Servo myservo1;   
Servo myservo2;  

void setup()
{
  myservo1.attach(9);
  myservo2.attach(9);
  ps2.begin(115200);
 
}
void loop()
{
  if (ps2.readButton(PS2_UP)==0) 
  {
    myservo1.write(179);
    delay(15);
  }
  if (ps2.readButton(PS2_DOWN)==0)
  {
    myservo1.write(0);
    delay(15);
  }
  if (ps2.readButton(PS2_LEFT)==0) 
  {
    myservo2.write(179);
    delay(15);
  }
  if (ps2.readButton(PS2_RIGHT)==0)
  {
    myservo2.write(0);
    delay(15);
  }
  
}
