#include <MPU6050_light.h>
#include <GlobalScheduler.h>
#include<MPU6500Driver.h>
#define OUTPUT A0
void setup() {
  
  Serial.begin(9600);
  TK_INIT();
}

void loop() {
  //Serial.print('hello');
  
  MainTaskScheduler();

}
