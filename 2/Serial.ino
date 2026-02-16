int led1=5;
int led2=6;
int led3=7;
int led4=8;
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(led1,OUTPUT);
  pinMode(led2,OUTPUT);
  pinMode(led3,OUTPUT);
  pinMode(led4,OUTPUT);

}

void loop() {



if(Serial.available()>0){
  char control =Serial.read();
  if(control=='H' || control=='h'){
    digitalWrite(led1, HIGH);
  }
  if(control=='L' || control=='l'){
    digitalWrite(led1, LOW);
  }
}


// ==========================================
// if(Serial.available()>0){
//   String control =Serial.readStringUntil('\n');
//   if(control=="H" || control=="h" ||  control=="on" || control=="1"){
//     digitalWrite(led1, HIGH);
//     digitalWrite(led2, HIGH);
//     digitalWrite(led3, HIGH);
//     digitalWrite(led4, HIGH);
//   }else if(control=="L" || control=="l" ||  control=="off" || control=="0"){
//     digitalWrite(led1, LOW);
//     digitalWrite(led2, LOW);
//     digitalWrite(led3, LOW);
//     digitalWrite(led4, LOW);
//   }else{
//   for(int i=0;i<=20;i++){
//       digitalWrite(led1, HIGH);
//       digitalWrite(led2, HIGH);
//       digitalWrite(led3, HIGH);
//       digitalWrite(led4, HIGH);
//       delay(25);
//       digitalWrite(led1, LOW);
//       digitalWrite(led2, LOW);
//       digitalWrite(led3, LOW);
//       digitalWrite(led4, LOW);
//       delay(25);

//     }
//   }
// }
// ===================================

// if(Serial.available()>0){
//   String control=Serial.readStringUntil('\n');
//   if(control=="ali"){
//       digitalWrite(led1, HIGH);
//   }else if(control=="mohsen"){
//       digitalWrite(led2, HIGH);
//   }else if(control=="saleh"){
//       digitalWrite(led3, HIGH);
//   }else if(control=="off"){
//       digitalWrite(led1, LOW);
//       digitalWrite(led2, LOW);
//       digitalWrite(led3, LOW);
//   }else{
//       digitalWrite(led1, HIGH);
//       digitalWrite(led2, HIGH);
//       digitalWrite(led3, HIGH);
//       delay(500);
//       digitalWrite(led1, LOW);
//       digitalWrite(led2, LOW);
//       digitalWrite(led3, LOW);
//   }

// }
}
