#include <Wire.h>
#include <LiquidCrystal_I2C.h>
#include <Servo.h>

LiquidCrystal_I2C lcd(0x27, 16, 2);
Servo myservo;

int potpin = A0;
int val;
int degree;
int per;

//int led[5] = {4, 5, 6, 7, 8, 9, 10, 11};

int led1 = 4;
int led2 = 5;
int led3 = 6;
int led4 = 7;
int led5 = 8;
int led6 = 9;
int led7 = 10;
int led8 = 11;


int fr = 0;
int bl = 4;

void setup() {
  Serial.begin(9600);
  lcd.begin();
  myservo.attach(3);
  pinMode(potpin, INPUT);

  ////////////////////////////
  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);
  pinMode(led3, OUTPUT);
  pinMode(led4, OUTPUT);
  pinMode(led5, OUTPUT);
  pinMode(led6, OUTPUT);
  pinMode(led7, OUTPUT);
  pinMode(led8, OUTPUT);
  ////////////////////////////


  //  for (int i = 0; i < 4 ; i++) {
  //    pinMode(led[i], OUTPUT);
  //  }
}

void loop() {

  val = analogRead(potpin);
  degree = map(val, 0, 1019, 0, 180);
  per = map(val, 0, 1019, 0, 100);


  fr = map(val, 0, 1019, 0, 7);

  Serial.print(fr);
 
  myservo.write(degree);
  lcd.setCursor(0, 0);
  lcd.print(degree);
  lcd.setCursor(4, 0);
  lcd.print("Degree");

  ///////////////
  lcd.setCursor(0, 1);
  lcd.print(per);
  lcd.setCursor(4, 1);
  lcd.print("%");
  delay(50);
  lcd.clear();

  if (fr == 0) {
    digitalWrite(led1, 1);
    digitalWrite(led2, 0);
    digitalWrite(led3, 0);
    digitalWrite(led4, 0);
    digitalWrite(led5, 0);
    digitalWrite(led6, 0);
    digitalWrite(led7, 0);
    digitalWrite(led8, 0);
  } else if (fr == 1) {
    digitalWrite(led1, 1);
    digitalWrite(led2, 1);
    digitalWrite(led3, 0);
    digitalWrite(led4, 0);
    digitalWrite(led5, 0);
    digitalWrite(led6, 0);
    digitalWrite(led7, 0);
    digitalWrite(led8, 0);
  }else if (fr == 2) {
    digitalWrite(led1, 1);
    digitalWrite(led2, 1);
    digitalWrite(led3, 1);
    digitalWrite(led4, 0);
    digitalWrite(led5, 0);
    digitalWrite(led6, 0);
    digitalWrite(led7, 0);
    digitalWrite(led8, 0);
  }else if (fr == 3) {
    digitalWrite(led1, 1);
    digitalWrite(led2, 1);
    digitalWrite(led3, 1);
    digitalWrite(led4, 1);
    digitalWrite(led5, 0);
    digitalWrite(led6, 0);
    digitalWrite(led7, 0);
    digitalWrite(led8, 0);
  }else if (fr == 4) {
    digitalWrite(led1, 1);
    digitalWrite(led2, 1);
    digitalWrite(led3, 1);
    digitalWrite(led4, 1);
    digitalWrite(led5, 1);
    digitalWrite(led6, 0);
    digitalWrite(led7, 0);
    digitalWrite(led8, 0);
  } else if (fr == 5) {
    digitalWrite(led1, 1);
    digitalWrite(led2, 1);
    digitalWrite(led3, 1);
    digitalWrite(led4, 1);
    digitalWrite(led5, 1);
    digitalWrite(led6, 1);
    digitalWrite(led7, 0);
    digitalWrite(led8, 0);
  }else if (fr == 6) {
    digitalWrite(led1, 1);
    digitalWrite(led2, 1);
    digitalWrite(led3, 1);
    digitalWrite(led4, 1);
    digitalWrite(led5, 1);
    digitalWrite(led6, 1);
    digitalWrite(led7, 1);
    digitalWrite(led8, 0);
  }else if (fr == 7) {
    digitalWrite(led1, 1);
    digitalWrite(led2, 1);
    digitalWrite(led3, 1);
    digitalWrite(led4, 1);
    digitalWrite(led5, 1);
    digitalWrite(led6, 1);
    digitalWrite(led7, 1);
    digitalWrite(led8, 1);
  }




}
