#include "BMS_BatteryCheck.h"

BatteryData_t SOC_Specification = {
  20.0,            
  80.0,           
  "StateOfCharge" 
  };
  
/**
 ***************************************************************************************************
 * Function Name: IsSocStable
 * 
 * Function Description: Checks the State of charge is within the range of permissible working limit.
 *
 * \param  float SOC
 *         
 * \return  Integer
 * \retval  BATTERY_HEALTH_OK or BATTERY_HEALTH_NOT_OK indicating State of charge status.
 ***************************************************************************************************
 */
int IsSocStable(float SOC)
{
  int issocstable = BATTERY_HEALTH_OK;
  
  float issocUpperLimit = GetWarningUpperLimit(SOC);
  float issocLowerLimit = GetWarningLowerLimit(SOC);
  
  
  if(SOC<SOC_Specification.BatteryDataLowerLimit || SOC>SOC_Specification.BatteryDataUpperLimit )
  {
      issocstable = BATTERY_HEALTH_NOT_OK;
  }
  /* Check to Notify  Warnings */
  else if (SOC < issocLowerLimit || SOC > issocUpperLimit)
  {
      issocstable =  BATTERY_WARNING;
  }

  
  PrintBatteryHealthStatus(SOC_Specification,issocstable);
  Notify_BMSController(SOC_Specification,issocstable);
  
  return issocstable;
}
  