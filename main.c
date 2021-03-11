#include <stdio.h>
#include <assert.h>
#include "BMS_BatteryCheck.h"

 int main()
 {
     assert(IsBatteryOk(25, 70, 0.7));
     assert(!IsBatteryOk(50, 85, 0));
     assert(!IsBatteryOk(18, 82, 0));
     
     return 0;
 }