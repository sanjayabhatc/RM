#include <SoftwareSerial.h>
#include <Cytron_PS2Shield.h>
Cytron_PS2Shield ps2(0,1);

int CW=HIGH;
int ACW=LOW;
int arrdir[4]={9,6,7,10};
int arrpwm[4]={8,4,5,11};

void setup()
{
  ps2.begin(9600);
  pinMode(arrdir[0], OUTPUT);
  pinMode(arrpwm[0], OUTPUT);
  pinMode(arrdir[1], OUTPUT);
  pinMode(arrpwm[1], OUTPUT);
  pinMode(arrdir[2], OUTPUT);
  pinMode(arrpwm[2], OUTPUT);
  pinMode(arrdir[3], OUTPUT);
  pinMode(arrpwm[3], OUTPUT);
  Serial.begin(9600);
}
void loop()
{
  if(ps2.readButton(PS2_UP)==0)
  {
    MOVEFORWARD();
    Serial.println("moving forward");
  }
  else if (ps2.readButton(PS2_RIGHT)==0)
  {
    MOVERIGHT();
    Serial.println("moving right");
  }
  else if (ps2.readButton(PS2_LEFT)==0){
    MOVELEFT();
    Serial.println("moving left");
  }
  else if (ps2.readButton(PS2_DOWN)==0){
    MOVEDOWNWARD();
    Serial.println("moving backwards");
  }
  else{
    analogWrite(arrpwm[0],0);
    analogWrite(arrpwm[1],0);
    analogWrite(arrpwm[2],0);
    analogWrite(arrpwm[3],0);
  }
}
void MOVEFORWARD(){
  digitalWrite(arrdir[0],HIGH);
  analogWrite(arrpwm[0],255);
  digitalWrite(arrdir[1],LOW);
  analogWrite(arrpwm[1],255);
  digitalWrite(arrdir[2],HIGH);
  analogWrite(arrpwm[2],255);
  digitalWrite(arrdir[3],LOW);
  analogWrite(arrpwm[3],255);
  }

void MOVERIGHT(){
  digitalWrite(arrdir[0],HIGH);
  analogWrite(arrpwm[0],255);
  digitalWrite(arrdir[1],HIGH);
  analogWrite(arrpwm[1],255);
  digitalWrite(arrdir[2],LOW);
  analogWrite(arrpwm[2],255);
  digitalWrite(arrdir[3],LOW);
  analogWrite(arrpwm[3],255);
  }
  
void MOVELEFT(){
  digitalWrite(arrdir[0],LOW);
  analogWrite(arrpwm[0],255);
  digitalWrite(arrdir[1],LOW);
  analogWrite(arrpwm[1],255);
  digitalWrite(arrdir[2],HIGH);
  analogWrite(arrpwm[2],255);
  digitalWrite(arrdir[3],HIGH);
  analogWrite(arrpwm[3],255);
  }
  
void MOVEDOWNWARD(){
  digitalWrite(arrdir[0],LOW);
  analogWrite(arrpwm[0],255);
  digitalWrite(arrdir[1],HIGH);
  analogWrite(arrpwm[1],255);
  digitalWrite(arrdir[2],LOW);
  analogWrite(arrpwm[2],255);
  digitalWrite(arrdir[3],HIGH);
  analogWrite(arrpwm[3],255);
  }
