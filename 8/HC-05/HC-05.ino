 /*
  Modified on March 09, 2021
  Modified by MohammedDamirchi from https://github.com/PaulStoffregen/SoftwareSerial
  Home<iframe class="wp-embedded-content" sandbox="allow-scripts" security="restricted" style="position: absolute; clip: rect(1px, 1px, 1px, 1px);" src="https://electropeak.com/learn/embed/#?secret=WmxOg0LBxX" data-secret="WmxOg0LBxX" width="600" height="338" title="&#8220;Home&#8221; &#8212; Electropeak | Ultimate Robotics Solutions" frameborder="0" marginwidth="0" marginheight="0" scrolling="no"></iframe>
*/


#include <SoftwareSerial.h>

SoftwareSerial mySerial(10, 11); // RX, TX

void setup() {
  // Open serial communications and wait for port to open:
  Serial.begin(9600);
  while (!Serial) {
    ; // wait for serial port to connect. Needed for native USB port only
  }

  // set the data rate for the SoftwareSerial port
  mySerial.begin(9600);
}

void loop() { // run over and over
  if (mySerial.available()) {
    Serial.write(mySerial.read());
  }
  if (Serial.available()) {
    mySerial.write(Serial.read());
  }
}
