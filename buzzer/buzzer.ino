int ledRouge=3;
int val;
int pot=A0;
int ledVert=4;
void setup() {
  pinMode(ledRouge,OUTPUT);
  pinMode(pot,INPUT);
  pinMode(ledVert,OUTPUT);
}

void loop() {
  val=analogRead(pot);
  if (val<500){
     digitalWrite(ledRouge,HIGH);
     digitalWrite(ledVert,LOW);
  }
  else{
     digitalWrite(ledVert,HIGH);
     digitalWrite(ledRouge,LOW);
  }
}
