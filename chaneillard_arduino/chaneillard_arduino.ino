void setup()
{
  pinMode(3,INPUT);
  pinMode(4,OUTPUT);
}
void loop()
{
  while(digitalRead(3)==HIGH);
  {
    digitalWrite(4,HIGH);
  }
  digitalWrite(4,LOW);
}
