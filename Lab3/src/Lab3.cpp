/******************************************************/
//       THIS IS A GENERATED FILE - DO NOT EDIT       //
/******************************************************/

#include "Particle.h"
#line 1 "d:/WindyCity_IOT/Labs/Lab3/src/Lab3.ino"
/*
 * Project Lab2
 * Description: Playing with a potentiometer
 * Author: Arnav Sangamnerkar
 * Date: 06/29/2021
 */
void setup();
void loop();
#line 7 "d:/WindyCity_IOT/Labs/Lab3/src/Lab3.ino"
SYSTEM_MODE(MANUAL);
SYSTEM_THREAD(ENABLED);

void setup() {
  // initlaize pins
  pinMode(D7, OUTPUT);
  pinMode(D6, OUTPUT);
  pinMode(D5, OUTPUT); 
}

// alternate between all colors in LED
void loop() {
  
  // turn red on and off
  analogWrite(D5, 128);
  analogWrite(D6, 0);
  analogWrite(D7, 0);
  delay(500);
  analogWrite(D5, 0);
  analogWrite(D6, 0);
  analogWrite(D7, 0);
  delay(500);

  // turn green on and off
  analogWrite(D5, 0);
  analogWrite(D6, 128);
  analogWrite(D7, 0);
  delay(500);
  analogWrite(D5, 0);
  analogWrite(D6, 0);
  analogWrite(D7, 0);
  delay(500);
  
  // turn blue on and off
  analogWrite(D5, 0);
  analogWrite(D6, 0);
  analogWrite(D7, 128);
  delay(500);
  analogWrite(D5, 0);
  analogWrite(D6, 0);
  analogWrite(D7, 0);
  delay(500);

  // turn orange on and off
  analogWrite(D5, 255);
  analogWrite(D6, 64);
  analogWrite(D7, 0);
  delay(500);
  analogWrite(D5, 0);
  analogWrite(D6, 0);
  analogWrite(D7, 0);
  delay(500);
  
  // turn yellow on and off
  analogWrite(D5, 255);
  analogWrite(D6, 128);
  analogWrite(D7, 0);
  delay(500);
  analogWrite(D5, 0);
  analogWrite(D6, 0);
  analogWrite(D7, 0);
  delay(500);

  // turn purple on and off
  analogWrite(D5, 255/2);
  analogWrite(D6, 0);
  analogWrite(D7, 255/2);
  delay(500);
  analogWrite(D5,0);
  analogWrite(D6,0);
  analogWrite(D7, 0);
  delay(500);

  // turn cyan on and off
  analogWrite(D5, 15/2);
  analogWrite(D6, 250/2);
  analogWrite(D7, 230/2);
  delay(500);
  analogWrite(D5,0);
  analogWrite(D6,0);
  analogWrite(D7, 0);
  delay(500);
}