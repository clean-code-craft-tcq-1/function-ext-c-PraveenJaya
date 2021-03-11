#include "BMS_BatteryCheck.h"

BatteryData_t ChargeRate_Specification = {
  0.0,            
  0.8,           
  "ChargeRate" 
  };
  
/**
 ***************************************************************************************************
 * Function Name: IschargeRateStable
 * 
 * Function Description: Checks the ChargeRate is within the range of permissible working limit.
 *
 * \param  float chargeRate
 *         
 * \return  Integer
 * \retval  BATTERY_HEALTH_OK or BATTERY_HEALTH_NOT_OK indicating Charge rate status.
 ***************************************************************************************************
 */
 
int IschargeRateStable(float chargeRate)
{
  int isChargeRatestable = BATTERY_HEALTH_OK;
  if(chargeRate<ChargeRate_Specification.BatteryDataLowerLimit || chargeRate>ChargeRate_Specification.BatteryDataUpperLimit )
  {
            isChargeRatestable = BATTERY_HEALTH_NOT_OK;
  }
  
  PrintBatteryHealthStatus(ChargeRate_Specification,isChargeRatestable );
  return isChargeRatestable;
}
