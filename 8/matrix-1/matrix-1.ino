/*
  8x8 Dot Matrix w/ MAX7219
  modified on 7 March 2019
  by Saeed Hosseini @ Electropeak
  Home<iframe class="wp-embedded-content" sandbox="allow-scripts" security="restricted" style="position: absolute; clip: rect(1px, 1px, 1px, 1px);" src="https://electropeak.com/learnfarsi/embed/#?secret=eT11uBIAME" data-secret="eT11uBIAME" width="600" height="338" title="&#8220;Home&#8221; &#8212; آکادمی کافه ربات | آموزش الکترونیک و رباتیک" frameborder="0" marginwidth="0" marginheight="0" scrolling="no"></iframe>
*/
#include <MaxMatrix.h>

int DIN = 7;
int CLK = 6;
int CS = 5;
int maxInUse = 1;

MaxMatrix m(DIN, CS, CLK, maxInUse);

byte poker[] = {8, 8,
                0xff,
                0x81,
                0xa5,
                0xa1,
                0xa1,
                0xa5,
                0x81,
                0xff
               };
byte smile[] = {8, 8,
                0xff,
                0x81,
                0xb5,
                0xa1,
                0xa1,
                0xb5,
                0x81,
                0xff
               };
byte sad[] = {8, 8,
              0xff,
              0x81,
              0xb5,
              0x91,
              0x91,
              0xb5,
              0x81,
              0xff
             };
byte kiss[] = {8, 8,
               0xff,
               0x81,
               0xb5,
               0xb1,
               0xb1,
               0xb5,
               0x81,
               0xff
              };
void setup() {
  m.init();
  m.setIntensity(8);
}
void loop() {
  m.writeSprite(0, 0, smile);
  delay(1000);
  m.clear();
  m.writeSprite(0, 0, poker);
  delay(1000);
  m.clear();
  m.writeSprite(0, 0, sad);
  delay(1000);
  m.clear();
  m.writeSprite(0, 0, kiss);
  delay(1000);
  for (int i = 0; i < 8; i++) {
    m.shiftLeft(false, false);
    delay(300);
  }
  m.clear();
}
