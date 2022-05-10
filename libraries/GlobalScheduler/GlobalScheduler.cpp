#include "GlobalScheduler.h"
#include "MPU6050_light.h"
#include <MPU6500Driver.h>

void TK_1()
{
}

void TK_3()
{
}

void TK_INIT()
{ // used in setup()

    MPU6500Driver_Init();
}

void TK_2()
{

    MPU6500Driver_MainFunction();
}

void MainTaskScheduler(void)
{ // used in loop()
    
    unsigned long int timerTK1 = 0, timerTK2 = 0, timerTK3 = 0;
    if (micros() - timerTK2 > 500)
    {
        Serial.println("tk_2");
        timerTK2 = micros();
        TK_2();
    }
    if (micros() - timerTK3 > 1000)
    {
        Serial.println("tk_3");
        timerTK3 = micros();
        TK_3();
    }
    if (micros() - timerTK1 > 5000)
    {
        Serial.println("tk_1");
        timerTK1 = micros();
        TK_1();
    }
}
  