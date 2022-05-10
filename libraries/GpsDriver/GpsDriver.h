#pragma once

void GpsDriver_Init();

boolean GpsDriver_GetPosition(float* , float*);

boolean GpsDriver_GetDate(int*, char*, char*);

boolean GpsDriver_IsProveoutComplete();

void GpsDriver_MainFunction();

boolean GpsDriver_GetTime(char*, char*, char*);


