
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);

  pinMode(A0,INPUT);

  pinMode(2,OUTPUT);
  pinMode(3,OUTPUT);
  pinMode(4,OUTPUT);
  pinMode(5,OUTPUT);
  pinMode(6,OUTPUT);
  pinMode(7,OUTPUT);
  
  randomSeed(analogRead(0));

  for(int i=0;i<7;i++){
        digitalWrite(i,LOW);
  }
}

void loop() {
  
  int key=digitalRead(A0);
  
    if(key==1){
      for(int a=0;a<4;a++){
        for(int i=2;i<8;i++){
          
          if(i!=2){
            digitalWrite(i-1,LOW);
            digitalWrite(i,HIGH);
            delay(45);
          }
          
        }
      }
      int r_number=random(2,8);
      for(int i=2;i<8;i++){
        digitalWrite(i,LOW);
      }
      Serial.println(r_number-1);
      digitalWrite(r_number,HIGH);
      
    }
  

}
