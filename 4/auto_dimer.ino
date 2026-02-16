int Led=6;


void setup() {
  
  pinMode(Led,OUTPUT);

}

void loop() { 
  for(int i=0 ; i<=255 ; i+=5){
    analogWrite(Led, i);
    delay(10);
  }
  for(int i=255 ; 0<=i ; i-=5){
    analogWrite(Led, i);
    delay(10);
  }
    
}
