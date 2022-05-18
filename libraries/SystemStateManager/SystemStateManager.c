#include <MPU6050_light.h>
#include "CrashReactionManager.h"
char *state;
void SystemStateManager_init();

void SystemStateManager_GetSystemState(char * state)
{
  state = (char *)malloc(20 * sizeof(char));
  
}
char return_state(char *state){
  return &state;
}
void SystemStateManager_MainFunction()
{
  SystemStateManager_GetSystemState(&state);
  // prove out complete
  // gps
  // gsm
  // mpu
}
