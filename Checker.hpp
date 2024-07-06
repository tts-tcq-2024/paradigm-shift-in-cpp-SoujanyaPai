#ifndef CHECKER_HPP
#define CHECKER_HPP

bool isValueInRange(float value, float min, float max, const char* errorMessage);
bool isBatteryOk(float temperature, float soc, float chargeRate);

#endif
