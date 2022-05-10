#pragma once

void GsmDriver_Init();

boolean GsmDriver_TriggerSmsTransmission();

void GsmDriver_SetSmsData(char*, int);

void GsmDriver_MainFunction();

boolean GsmDriver_IsProveoutComplete();

