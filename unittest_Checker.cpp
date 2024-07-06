#include <assert.h>
#include <iostream>
#include "Checker.hpp"

using namespace std;

void testAllConditions(){
  // Case 1: All values within the range and Batter is Ok
  assert(batteryIsOk(25, 70, 0.7) == true);

  // Case 2: Temperature Out of Range when temperature value is low
  assert(batteryIsOk(-1, 50, 0.5) == false);

  // Case 3: Temperature Out of Range when temperature value is high
  assert(batteryIsOk(46, 50, 0.5) == false);

  // Case 4: SOC Out of Range when soc value is low
  assert(batteryIsOk(25, 19, 0.5) == false);

  // Case 5: SOC Out of Range when soc value is high
  assert(batteryIsOk(25, 81, 0.5) == false);

  // Case 6: Charge Rate Out of Range
  assert(batteryIsOk(25, 50, 0.9) == false);

  // Case 7: Multiple parameter Out of Range
  assert(batteryIsOk(-1, 81, 0.9) == false);

  // Case 8: Minimum Boundary value for Temperature
  assert(batteryIsOk(0, 50, 0.5) == true);

  // Case 9: Maximum Boundary value for Temperature
  assert(batteryIsOk(45, 50, 0.5) == true);

  // Case 10: Minimum Boundary for SOC
  assert(batteryIsOk(25, 20, 0.5) == true);

  // Case 11: Maximum Boundary value for SOC
  assert(batteryIsOk(25, 80, 0.5) == true);

  // Case 12: Maximum Boundary value for Charge Rate
  assert(batteryIsOk(25, 50, 0.8) == true);
}

int main() {
  testAllConditions();
  cout << "All tests passed!" << endl;
}
