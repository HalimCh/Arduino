int led=4;
int j=0;
void setup() {
  pinMode(led,OUTPUT);  
      }

  


void loop() {
   for(int i=0;i<14;i++){
    digitalWrite(led,HIGH);
    delay(500);  
    digitalWrite(led,LOW);
    delay(2000);
      }
  for(int k=0;k<3;k++){
    digitalWrite(led,HIGH);
    delay(2000);
    
    digitalWrite(led,LOW);
    delay(2000);  
      }

 
}
