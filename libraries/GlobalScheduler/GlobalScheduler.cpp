#include "GlobalScheduler.h"
#include "MPU6050_light.h"
#include <MPU6500Driver.h>
#include <CrashDetectionAlgorithm.h>
#include "CrashReactionManager.h"

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
    //float *accX, float *accY, float *accZ;

    MPU6500Driver_MainFunction();

    CrashDetectionAlgorithm_MainFunction();

    CrashReactionManager_MainFunction();
}

void MainTaskScheduler(void)
{ // used in loop()

    unsigned long int timerTK1 = 0, timerTK2 = 0, timerTK3 = 0;
    if (micros() - timerTK2 > 500)
    {
        TK_2();
        Serial.println("tk_2");
        timerTK2 = micros();
    }
    Serial.print(timerTK2);
    if (micros() - timerTK3 > 1000)
    {
        TK_3();
        Serial.println("tk_3");
        timerTK3 = micros();
    }
    Serial.print(timerTK3);
    if (micros() - timerTK1 > 5000)
    {
        TK_1();
        Serial.println("tk_1");
        timerTK1 = micros();
    }
    Serial.print(timerTK1);
}
