//Globals
#define STEPPIN 12
#define DIRPIN 11

const int STEPTIME = 5;
void setup() {
  // put your setup code here, to run once:
  pinMode(STEPPIN,OUTPUT);
  pinMode(DIRPIN,OUTPUT);
  
}

void loop() {
  // put your main code here, to run repeatedly:
  forward(400);
  delay(2000);
  reverse(400);
  delay(2000);

}

void forward(int steps){
  int i;
  digitalWrite(DIRPIN,HIGH);//SET DIRECTION 
  for(i=0;i<steps;i++){
    digitalWrite(STEPPIN,HIGH);
    delayMicroseconds(STEPTIME);
    digitalWrite(STEPPIN,LOW);
    delayMicroseconds(STEPTIME);
  }
}
  

void reverse(int steps){
  int i;
  digitalWrite(DIRPIN,LOW);//SET DIRECTION 
  for(i=0;i<steps;i++){
    digitalWrite(STEPPIN,HIGH);
    delayMicroseconds(STEPTIME);
    digitalWrite(STEPPIN,LOW);
    delayMicroseconds(STEPTIME);
    }
}
