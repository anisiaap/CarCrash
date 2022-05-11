#include <MPU6050_light.h>
#include<MPU6500Driver.h>
#include<SystemStateManager.h>
#include<CrashReactionManager.h>

void CrashDetectionAlgorithm_Init();

void CrashDetectionAlgorithm_GetCrashType(char * crash_type){
    crash_type = (char *)malloc(20 * sizeof(char));
    if (accX < (-0.5))
    {
        const char mes[15] = "BACK CRASH";
        strcpy(crash_type, mes);
        Serial.println(crash_type);
        delay(10000);
    }
    else if (accX > 0.5)
    {
        const char mes[15] = "FRONT CRASH";
        strcpy(crash_type, mes);
        Serial.println(crash_type);
        delay(10000);
    }
    if (accY > 0.5)
    {
        const char mes[15] = "LEFT CRASH";
        strcpy(crash_type, mes);
        Serial.println(crash_type);
        delay(10000);
    }
    else if (accY < (-0.5))
    {
        const char mes[15] = "RIGHT CRASH";
        strcpy(crash_type, mes);
        Serial.println(crash_type);
        delay(10000);
    }
}

void CrashDetectionAlgorithm_GetCrashSeverity(unsigned char *){
   

}

void CrashDetectionAlgorithm_MainFunction(){
    float accX, accY, accZ;
    char *state;
    
    MPU6500Driver_GetAccelerationData(&accX, &accY, &accZ);
    SystemStateManager_GetSystemState(&state);
}