#include "BMS_BatteryCheck.h"


/**
 ***************************************************************************************************
 * Function Name: IsBatteryOk
 * 
 * Function Description: Checks the overall Battery health status
 *
 * \param  float temperature
 *         float soc
 *         float chargeRate
 *         
 * \return  Integer
 * \retval  TRUE or FALSE indicating overall battery health status.
 ***************************************************************************************************
 */
 
int IsBatteryOk(float temperature, float soc, float chargeRate) {
  int istemparatureok, issocok, ischargerateok;
  istemparatureok = IsTemperatureStable(temperature);
  issocok = IsSocStable(soc);
  ischargerateok = IschargeRateStable(chargeRate);
  return ( istemparatureok && issocok && ischargerateok);
}