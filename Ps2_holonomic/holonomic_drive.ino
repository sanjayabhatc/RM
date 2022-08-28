// setting constant speed for the bot

//pin Numbers
int t=8;
int tr=4;
int br=5;
int b=11;
int tspeed=9;
int trspeed=6;
int brspeed=7;
int bspeed=10;

int motorspeed=100;

//horizontal and verticle speeds
int speedverticle;
int speedhorizontal;

//degree input by user
//at what degree the bot has to move
int degree; 

void setup() {
 pinMode(t, OUTPUT);
 pinMode(tspeed, OUTPUT);
 pinMode(tr, OUTPUT);
 pinMode(trspeed, OUTPUT);
 pinMode(b, OUTPUT);
 pinMode(bspeed, OUTPUT);
 pinMode(br, OUTPUT);
 pinMode(brspeed, OUTPUT);
 Serial.begin(9600); 
}

void loop() {
  Serial.println("Enter a number between 0-360");
  if(Serial.available())
  {
    int degree=0;
  }
  if(degree<0||degree>360)
  {
    Serial.println("Enter correct input");
    return;
  }
 digitalWrite(t,LOW);
 digitalWrite(tr, HIGH);
 digitalWrite(b, LOW);
 digitalWrite(br, HIGH);
 int speedverticle=sin(degree)*motorspeed;
 int speedhorizontal=cos(degree)*motorspeed;

 if(speedverticle<0)
 {
  speedverticle*=-1;
  digitalWrite(tspeed, HIGH);
  digitalWrite(trspeed, LOW);
 }
  if(speedhorizontal<0)
 {
  speedhorizontal*=-1;
  digitalWrite(bspeed, HIGH);
  digitalWrite(brspeed, LOW);
 }

  int arrwheel[]{t,tr,b,br};
  int wspeed[]{45,135,315,225};
  int v[]={};
  for (int i=0; i<4; i++){
    v[i]=motorspeed*sin(wspeed[i])*sin(degree)+motorspeed*cos(wspeed[i])*cos(degree);
  }
  //giving speed input to the wheels
  for (int j=0;j<4;j++){
    analogWrite(arrwheel[j],v[j]);
  }
}
