#include <MPU6050_light.h>
#include <MPU6500Driver.h>
#include <SystemStateManager.h>
#include <CrashReactionManager.h>

void CrashDetectionAlgorithm_Init();

void CrashDetectionAlgorithm_GetCrashType(char *mesaj_crashtype)
{
    mesaj_crashtype = (char *)malloc(20 * sizeof(char));

    int k = 0;
    if (return_accx() < (-0.5))
    {
        k = 1;
        const char mes[15] = "BACK CRASH";
        strcpy(mesaj_crashtype, mes);
    }
    else if (return_accx() > 0.5)
    {
        k = 1;
        const char mes[15] = "FRONT CRASH";
        strcpy(mesaj_crashtype, mes);
    }
    if (return_accy() > 0.5)
    {
        k = 1;
        const char mes[15] = "LEFT CRASH";
        strcpy(mesaj_crashtype, mes);
    }
    else if (return_accy() < (-0.5))
    {
        k = 1;
        const char mes[15] = "RIGHT CRASH";
        strcpy(mesaj_crashtype, mes);
    }
    if (k == 1)
    {
        Serial.println(mesaj_crashtype);
        delay(10000);
    }
}

void CrashDetectionAlgorithm_GetCrashSeverity(unsigned char *);

void CrashDetectionAlgorithm_MainFunction()
{
    float accX, accY, accZ;
    char *state;

    MPU6500Driver_GetAccelerationData(&accX, &accY, &accZ);
    SystemStateManager_GetSystemState(&state);
}