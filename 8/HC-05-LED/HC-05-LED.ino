#include <SoftwareSerial.h>
SoftwareSerial MyBlue(10, 11); 
char flag; 
int LED = 13; 

void setup() 
{   
  Serial.begin(9600); 
  MyBlue.begin(9600); 
  pinMode(LED, OUTPUT); 
  Serial.println("Ready to connect"); 
} 

void loop() 
{ 
  if (MyBlue.available()){
    flag = MyBlue.read();
    
  if (flag == '1') 
  { 
    digitalWrite(LED, HIGH); 
    Serial.println("LED On"); 
  } 
  else if (flag == '0') 
  { 
    digitalWrite(LED, LOW); 
    Serial.println("LED Off"); 
  } 
  }
}