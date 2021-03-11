#include <stdio.h>
#include "BMS_BatteryCheck.h"


const char *BatteryHealthMessage[] =
{
    "is Unstable! Take Action Immediately!!!",
    "is Stable"
    "is Reaching Unstable! Warning call"
};


/**
***************************************************************************************************
* Function Name: PrintBatteryHealthStatus
* 
* Function Description: Displays the BMS battery status message.
*
* \param  BatteryData_t BatteryData
*         int IndexOfBatteryHealthMessage
*         
* \return  void
* \retval  None
***************************************************************************************************
*/
void PrintBatteryHealthStatus(BatteryData_t BatteryData, int IndexOfBatteryHealthMessage)
{
    printf("%s %s \n", BatteryData.BatteryParticular, BatteryHealthMessage[IndexOfBatteryHealthMessage]);
}

float GetWarningUpperLimit(float val)
{
    float upperLimit = (val - ((val * BATTERY_WARNING_PERCENTAGE)/100));
    return upperLimit;
}

float GetWarningLowerLimit(float val)
{
    float lowerLimit = (val + ((val * BATTERY_WARNING_PERCENTAGE)/100));
    return lowerLimit;
}

