#pragma once
#include "CrashDetectionAlgorithm.h"
#include "EEPROM.h"
void CrashDataRecorder_GetRecordedData(unsigned char *, unsigned char);

void CrashDataRecorder_init();

void CrashDataRecorder_TriggerRecording();

void CrashDataRecorder_MainFunction();
