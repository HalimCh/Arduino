

int pot=A0;
int led1=8;
int led2=9;
int led3=10;
int led4=11;
int buz=2;
int variable=0;

void Setup(){
  pinMode(pot,INPUT);
  pinMode(led1,OUTPUT);
  Serial.begin(9600);
  pinMode(led2,OUTPUT);
  pinMode(led3,OUTPUT);
  pinMode(led4,OUTPUT);
  
  

}
void loop(){
  int variable=analogRead(pot);
  Serial.println(variable);
  if (0<=variable<=250)
   {
    /* code */
    digitalWrite(led1,HIGH);
    digitalWrite(led2,LOW);
    digitalWrite(led3,LOW);
    digitalWrite(led4,LOW);
   }
  if (250<=variable<=500)
  {
    digitalWrite(led1,HIGH);
    digitalWrite(led2,HIGH);
    digitalWrite(led3,LOW);
    digitalWrite(led1,LOW);
  }
  if (500<=variable<=750)
  {
    digitalWrite(led1,HIGH);
    digitalWrite(led2,HIGH);
    digitalWrite(led3,HIGH);
    digitalWrite(led4,LOW);

    
  }
  if (500<=variable<=750)
  {
    digitalWrite(led4,HIGH);
    digitalWrite(led4,HIGH);
    digitalWrite(led4,HIGH);
    digitalWrite(led4,HIGH);
    tone(buz,150);
    delay(1000);
    noTone(buz);
    }
}
