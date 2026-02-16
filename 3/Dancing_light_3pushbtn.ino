int key1 = digitalRead(A0);
int key2 = digitalRead(A1);
int key3 = digitalRead(A2);

void setup() {
  pinMode(A0,INPUT);
  pinMode(A1,INPUT);
  pinMode(A2,INPUT);
  pinMode(0,OUTPUT);
  pinMode(1,OUTPUT);
  pinMode(2,OUTPUT);
  pinMode(3,OUTPUT);
  pinMode(4,OUTPUT);
  pinMode(5,OUTPUT);
  pinMode(6,OUTPUT);
  pinMode(7,OUTPUT);
  

}
void loop() {

    key1 = digitalRead(A0);
    key2 = digitalRead(A1);
    key3 = digitalRead(A2);
    int dance1[8][8]={
  {0,0,0,0,0,0,0,1},
  {0,0,0,0,0,0,1,0},
  {0,0,0,0,0,1,0,0},
  {0,0,0,0,1,0,0,0},
  {0,0,0,1,0,0,0,0},
  {0,0,1,0,0,0,0,0},
  {0,1,0,0,0,0,0,0},
  {1,0,0,0,0,0,0,0}
  };

  int dance2[8][8]={
  {1,0,0,0,0,0,0,0},
  {0,1,0,0,0,0,0,0},
  {0,0,1,0,0,0,0,0},
  {0,0,0,1,0,0,0,0},
  {0,0,0,0,1,0,0,0},
  {0,0,0,0,0,1,0,0},
  {0,0,0,0,0,0,1,0},
  {0,0,0,0,0,0,0,1}
  };

  int dance3[8][8]={
  {0,0,0,0,1,0,0,0},
  {0,0,0,1,0,1,0,0},
  {0,0,1,0,0,0,1,0},
  {0,1,0,0,0,0,0,1},
  {1,0,0,0,0,0,1,0},
  {0,1,0,0,0,1,0,0},
  {0,0,1,0,1,0,0,0},
  {0,0,0,1,0,0,0,0}
  };
    if(key1 == 1) {
        for(int a = 0; (a <= 7) && key2 == 0 && key3 == 0; a++) {
            for(int i = 0; i < 8; i++) {
                digitalWrite(i, dance1[a][i]);
                delay(50);
            }
        }
    } else if(key2 == 1) {
        for(int a = 0; (a <= 7) && key1 == 0 && key3 == 0; a++) {
            for(int i = 0; i < 8; i++) {
                digitalWrite(i, dance2[a][i]);
                delay(50);
            }
        }
    } else if(key3 == 1) {
        for(int a = 0; (a <= 7) && key1 == 0 && key2 == 0; a++) {
            for(int i = 0; i < 8; i++) {
                digitalWrite(i, dance3[a][i]);
                delay(50);
            }
        }
    }
}
