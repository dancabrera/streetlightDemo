//This program is for the traffic light demo for 261st cyber city
//It can simulate 2, 3 Led traffic signals on an Arduino Uno
//Author: Dan Cabrera
//First submission 11 Aug 2014

const int redLed = 4;
const int yellowLed = 3;
const int greenLed = 2;
const int redLed2 = 5;
const int yellowLed2 = 6;
const int greenLed2 = 7;
int redDelay = 5;
int greenDelay = 5;
int yellowDelay = 2;
int counter = 0;

void setup(){
  pinMode(redLed, OUTPUT);
  pinMode(yellowLed, OUTPUT);
  pinMode(greenLed, OUTPUT);
  pinMode(redLed2, OUTPUT);
  pinMode(yellowLed2, OUTPUT);
  pinMode(greenLed2, OUTPUT);
  digitalWrite(redLed, LOW);
  digitalWrite(yellowLed, LOW);
  digitalWrite(greenLed, LOW);
  digitalWrite(redLed2, LOW);
  digitalWrite(yellowLed2, LOW);
  digitalWrite(greenLed2, LOW);
}

void loop(){
  if(counter > 1){
    digitalWrite(redLed, LOW);
    digitalWrite(redLed2, LOW);
    digitalWrite(yellowLed, LOW);
    digitalWrite(yellowLed2, LOW);
    digitalWrite(greenLed, HIGH);
    digitalWrite(greenLed2, HIGH);
    delay(1000);
  }
else{
  digitalWrite(redLed, HIGH);
  delay(400);
  digitalWrite(redLed2, LOW);
  digitalWrite(greenLed2, HIGH);
  for(int i = 1; i <= redDelay; i++){
   delay(1000);
  }
  digitalWrite(greenLed2, LOW);
  digitalWrite(yellowLed2, HIGH);
    for(int i = 1; i <= yellowDelay; i++){
      delay(1000);
    }
  digitalWrite(redLed2, HIGH);
  digitalWrite(yellowLed2, LOW);
  delay(400);
  digitalWrite(greenLed, HIGH);
  digitalWrite(redLed, LOW);
   for(int i = 1; i <= greenDelay; i++){
   delay(1000);
  }
  
  digitalWrite(greenLed, LOW);
  digitalWrite(yellowLed, HIGH);
   for(int i = 1; i <= yellowDelay; i++){
   delay(1000);
  }
  digitalWrite(yellowLed, LOW);
}
  counter++;
}
 
