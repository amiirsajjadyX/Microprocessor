int Led=9;

int val=0;
void setup() {
  pinMode(A0,INPUT);
  pinMode(Led,OUTPUT);

}

void loop() {
  
  val=analogRead(A0);
  vol=map(val,0,1023,0,255);
  analogWrite(Led,vol);

}
