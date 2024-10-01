int occurence;
float timing;
void setup() {
  Serial.begin(9600);
  pinMode(4,OUTPUT);
    

}

void loop() {
  // put your main code here, to run repeatedly:
  Serial.println("tape occurence");
  while(Serial.available()==0){}
  occurence=Serial.parseInt();
  Serial.println("tape timing with second");
  while(Serial.available()==0){}
  timing=Serial.parseFloat();
  for (int i=0;i<occurence;i++){
    digitalWrite(4,1);
    delay(timing*1000.0)  ;
    digitalWrite(4,0);
    delay(timing*1000.0);
  
}
}
