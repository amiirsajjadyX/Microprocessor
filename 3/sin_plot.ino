void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
}

void loop() {
  for(float i=0;i<360.0;i+=10){
    Serial.print(sin(i*(PI/180.0)));
    Serial.print(" ");
    Serial.println(cos(i*(PI/180.0)));
  }
}
