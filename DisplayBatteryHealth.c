#include <stdio.h>
#include "BMS_BatteryCheck.h"


const char *BatteryHealthMessage[] =
{
    "is Unstable! Take Action Immediately!!!",
    "is Stable"
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
