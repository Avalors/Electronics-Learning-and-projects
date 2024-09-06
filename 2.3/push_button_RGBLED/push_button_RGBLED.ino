
#define red 3
#define green 5
#define blue 6

int button_red = 8;
int button_green = 9;
int button_blue = 10;
void setup() {

  //initializes RGB diode output pins
  pinMode(red,OUTPUT);
  pinMode(green,OUTPUT);
  pinMode(blue,OUTPUT);

  //initializes push button inputs
  pinMode(button_red,INPUT_PULLUP);
  pinMode(button_green,INPUT_PULLUP);
  pinMode(button_blue,INPUT_PULLUP);

  //sets intial brightness to 0
  digitalWrite(red, LOW);
  digitalWrite(green,LOW);
  digitalWrite(blue,LOW);

}

void loop() {

  if(digitalRead(button_red) == LOW){
    digitalWrite(red,HIGH);
  }
  else{
    digitalWrite(red,LOW);
  }

  if(digitalRead(button_green) == LOW){
    digitalWrite(green,HIGH);
  }
  else{
    digitalWrite(green,LOW);
  }

  if(digitalRead(button_blue) == LOW){
    digitalWrite(blue,HIGH);
  }
  else{
    digitalWrite(blue,LOW);
  }


}
