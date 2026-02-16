int Led=9;
float val=0.0;

void setup() {
  Serial.begin(9600);
  pinMode(A0,INPUT);
  pinMode(Led,OUTPUT);

}

void loop() {
  
 
    val=analogRead(A0);
    float vol=map(val,0,1023,0,255);
    Serial.print("voltage is : ");
    Serial.println(val/204.6);
    delay(50);
    analogWrite(Led,vol);

}
