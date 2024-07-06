#include <assert.h>
#include <iostream>
#include "Checker.hpp"
using namespace std;

bool isValueInRange(float value, float min, float max, const char* errorMessage){
  if(value < min || value > max) {
    cout << errorMessage << endl;
    return false;
  }
  return true;
}
 
bool isBatteryOk(float temperature, float soc, float chargeRate) {
  bool isTemperatureOk = isValueInRange(temperature, 0, 45, "Temperature out of range!");
  bool isSocOk = isValueInRange(soc, 20, 80, "State of Charge out of range!");
  bool isChargeRateOk = isValueInRange(chargeRate, 0, 0.8, "Charge Rate out of range!");
  return isTemperatureOk && isSocOk && isChargeRateOk;
}

int main() {
  assert(isBatteryOk(25, 70, 0.7) == true);
  assert(isBatteryOk(50, 85, 0) == false);
}
