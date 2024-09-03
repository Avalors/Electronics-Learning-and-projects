

#define RED 6
#define GREEN 5
#define BLUE 3
void setup() {
  pinMode(RED,OUTPUT);
  pinMode(GREEN,OUTPUT);
  pinMode(BLUE,OUTPUT);

  digitalWrite(RED,HIGH);
  digitalWrite(GREEN,LOW);
  digitalWrite(BLUE,LOW);
}

#define delaytime 10 //10ms delay creates gradual change of colour within loops
void loop() {

  //will determine brightness via pwm output
  int red = 255; 
  int green = 0;
  int blue = 0;

  //transition from red-to-green

  for(int i = 0; i < 256; i++){
    red--;
    green++;

    analogWrite(RED,red);
    analogWrite(GREEN,green);
    delay(delaytime);
  }

  //transition from green-to-blue

  for(int j = 0; j < 256; j++){
    green--;
    blue++;

    analogWrite(GREEN,green);
    analogWrite(BLUE,blue);
    delay(delaytime);
  }

  //transition from 
  for(int k = 0; k < 256; k++){
    blue--;
    red++;

    analogWrite(BLUE,blue);
    analogWrite(RED,red);
    delay(delaytime);
  }

}
