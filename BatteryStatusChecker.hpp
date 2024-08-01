#ifndef BATTERYSTATUSCHECKER_HPP
#define BATTERYSTATUSCHECKER_HPP

#include "LanguageOptions.h"

bool isValueInRange(float value, float min, float max, const char* errorMessage);
bool isBatteryOk(float temperature, float soc, float chargeRate);

#endif //BATTERYSTATUSCHECKER_HPP
