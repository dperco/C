#include <Servo.h>

Servo E;
#define E_STEP_PIN 26
#define E_DIR_PIN 28
#define E_ENABLE_PIN 24
int pulso();

void setup() {
  
pinMode(E_STEP_PIN , OUTPUT);
 pinMode(E_DIR_PIN , OUTPUT);
 pinMode(E_ENABLE_PIN , OUTPUT);

 digitalWrite(E_ENABLE_PIN , LOW);
 
}

void loop() {
  
digitalWrite(E_DIR_PIN , HIGH);
 
 pulso();
 delay(1000);

  digitalWrite(E_DIR_PIN , LOW);

 pulso();
 delay(1000);
}

int  pulso ()
{
for (int i = 0; i <= 1600000; i++)
 {
 digitalWrite(E_STEP_PIN , HIGH);
 
 delay(09);
 digitalWrite(E_STEP_PIN , LOW);
 
 }
  
}