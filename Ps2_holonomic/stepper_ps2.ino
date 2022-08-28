#include <SoftwareSerial.h>
#include <Cytron_PS2Shield.h>
Cytron_PS2Shield ps2(2,3);
 
// define stepper motor control pins
#define STEPPIN 12
#define DIRPIN 11
const int STEPTIME = 5;
 
void setup()
{
  ps2.begin(9600);
  pinMode(STEPPIN,OUTPUT);
  pinMode(DIRPIN,OUTPUT);
  Serial.begin(9600);
}
 
void loop()
{

  if (ps2.readButton(PS2_UP)==0){
    Serial.println("UP");
    forward(400);
  }
  else if (ps2.readButton(PS2_DOWN)==0){
    Serial.println("DOWNWARD");
    reverse(400);
  }
//  else {
//    Stop(0);
//  }
}
void forward(int steps){
  int i;
  digitalWrite(DIRPIN,HIGH);//SET DIRECTION 
  for(i=0;i<steps;i++){
    digitalWrite(STEPPIN,HIGH);
    delay(STEPTIME);
    digitalWrite(STEPPIN,LOW);
    delay(STEPTIME);
  }
}
  

void reverse(int steps){
  int i;
  digitalWrite(DIRPIN,LOW);//SET DIRECTION 
  for(i=0;i<steps;i++){
    digitalWrite(STEPPIN,HIGH);
    delay(STEPTIME);
    digitalWrite(STEPPIN,LOW);
    delay(STEPTIME);
    }
}
//void Stop(int steps){
//  digitalWrite(STEPPIN,LOW);
//}
