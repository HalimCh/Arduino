int buzzer=4;
int j=0;
void setup() {
  for(int i=0;i<14;i++){
    pinMode(i,OUTPUT);  
      }
  while(j<5   ){
    tone(buzzer,500);
    delay(500);
    noTone(buzzer);
    delay(500);
    j++;
    }
  
}

void loop() {
 
}
