#include "MPU6050_light.h"
#include "MPU6500Driver.h"
#include <SystemStateManager.h>
#include "CrashDetectionAlgorithm.h"

void CrashReactionManager_Init();

void CrashReactionManager_GetDeploymentMask(unsigned char *);

void CrashReactionManager_MainFunction()
{
    char *state, *severity, *type;

    SystemStateManager_GetSystemState(&state);

    CrashDetectionAlgorithm_GetCrashSeverity(&severity);

    CrashDetectionAlgorithm_GetCrashType(&type);
    // crashdatarecorder
    // io, emergency
}
