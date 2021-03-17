/**
 * @file          BMS_Controller.c
 * @ingroup       Module
 * @author        PraveenJaya
 * Controller to act on action
 */

/* ==================[Includes]=============================================== */
#include "BMS_BatteryCheck.h"

/**
 ***************************************************************************************************
 * Function Name: BMSController_takeACtion
 * 
 * Function Description: Controller for BMS
 *
 * \param  float temperature
 *         float soc
 *         float chargeRate
 *         
 * \return  Integer
 * \retval  TRUE or FALSE indicating overall battery health status.
 ***************************************************************************************************
 */
 
 void Notify_BMSController(BatteryData_t BatteryData, int IndexOfBatteryHealthMessage)
 {
     /* Dummy Controller */
     printf("Controller Message %s %d",BatteryData.BatteryParticular, IndexOfBatteryHealthMessage);
     
 }
 
 
 
