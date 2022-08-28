// setting constant speed for the bot

//pin Numbers
int tl=8;
int tr=4;
int br=5;
int bl=11;
int tlspeed=6;
int trspeed=9;
int brspeed=7;
int blspeed=10;

int motorspeed=255;

void setup() {
 pinMode(tl, OUTPUT);
 pinMode(tlspeed, OUTPUT);
 pinMode(tr, OUTPUT);
 pinMode(trspeed, OUTPUT);
 pinMode(bl, OUTPUT);
 pinMode(blspeed, OUTPUT);
 pinMode(br, OUTPUT);
 pinMode(brspeed, OUTPUT);
 Serial.begin(9600); 
}

void loop() {
  digitalWrite(tl,HIGH);
  analogWrite(tlspeed,200);
  digitalWrite(tr,HIGH);
  analogWrite(trspeed,200);
  digitalWrite(bl,HIGH);
  analogWrite(blspeed,200);
  digitalWrite(br,LOW);
  analogWrite(brspeed,200);
}
