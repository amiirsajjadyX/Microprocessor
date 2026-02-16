int led1=5;
int led2=6;
int led3=7;
void setup() {
  // put your setup code here, to run once:
  pinMode(led1,OUTPUT);
  pinMode(led2,OUTPUT);
  pinMode(led3,OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
    digitalWrite(led1,HIGH);
    delay(100);
    digitalWrite(led2,HIGH);
    delay(100);
    digitalWrite(led3,HIGH);
    digitalWrite(led1,LOW);
    delay(100);
    digitalWrite(led2,LOW);
    delay(100);
    digitalWrite(led3,LOW);
    delay(1000);
  // digitalWrite(led1,HIGH);
  //     digitalWrite(led1,HIGH);
  // digitalWrite(led2,HIGH);
  // delay(3000);
  // digitalWrite(led1,LOW);
  // digitalWrite(led2,LOW);
  // delay(500);
  
}
