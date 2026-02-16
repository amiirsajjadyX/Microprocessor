int trig=6;
int echo=7;
int duration;
int distance;
#include <LiquidCrystal.h>

LiquidCrystal lcd(12,11,5,4,3,2);

void setup() {
  // put your setup code here, to run once:
  lcd.begin(16,2);
  Serial.begin(9600);
  pinMode(trig, OUTPUT);
  pinMode(echo, INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(trig, LOW);
  delayMicroseconds(2);
  digitalWrite(trig, HIGH);
  delayMicroseconds(10);
  digitalWrite(trig, LOW);

  duration=pulseIn(echo, HIGH);
  distance=(duration/2)*0.0343;
  lcd.setCursor(0, 0);
  lcd.print(distance);
  Serial.println(distance);
  delay(1000);
  lcd.clear();
}

