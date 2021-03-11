#include "BMS_BatteryCheck.h"


BatteryData_t Temparature_Specification = {
  0.0,            
  45.0,           
  "Temparature" 
  };
  
  
/**
***************************************************************************************************
* Function Name: IsTemperatureStable
* 
* Function Description: Checks the Temperature is within the range of permissible working limit.
*
* \param  float Temperature
*         
* \return  Integer
* \retval  BATTERY_HEALTH_OK or BATTERY_HEALTH_NOT_OK indicating temperature status.
***************************************************************************************************
*/
int IsTemperatureStable(float Temperature)
{
    int isTemparaturestable = BATTERY_HEALTH_OK;
    float tempUpperWarningLimit = (Temparature_Specification.BatteryDataUpperLimit - ((Temparature_Specification.BatteryDataUpperLimit * BATTERY_WARNING_PERCENTAGE)/100));
    float tempLowWarningLimit = (Temparature_Specification.BatteryDataLowerLimit + ((Temparature_Specification.BatteryDataUpperLimit * BATTERY_WARNING_PERCENTAGE)/100));
    
    if (Temperature<Temparature_Specification.BatteryDataLowerLimit || Temperature>Temparature_Specification.BatteryDataUpperLimit)
    {
      isTemparaturestable = BATTERY_HEALTH_NOT_OK;
    }
    /* Check to Notify  Warnings */
    else if (Temperature < tempLowWarningLimit || Temperature > tempUpperWarningLimit)
    {
      isTemparaturestable =  BATTERY_WARNING;
    }
    
    PrintBatteryHealthStatus(Temparature_Specification,isTemparaturestable );
    return isTemparaturestable;
}