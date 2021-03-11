typedef struct{
    float BatteryDataLowerLimit;
    float BatteryDataUpperLimit;
    const char* BatteryParticular;
}BatteryData_t;

void PrintBatteryHealthStatus(BatteryData_t BatteryData, int IndexOfBatteryHealthMessage);

int IsTemperatureStable(float Temperature);

int IsSocStable(float SOC);

int IschargeRateStable(float chargeRate);

int IsBatteryOk(float temperature, float soc, float chargeRate);

float GetWarningUpperLimit(float val);

float GetWarningLowerLimit(float val);

int CheckTempStability(float Temperature,float tempUpperWarningLimit,float tempLowWarningLimit);

#define BATTERY_HEALTH_OK 1
#define BATTERY_HEALTH_NOT_OK 0
#define BATTERY_WARNING 2

#define BATTERY_WARNING_PERCENTAGE 5

#define LANGUAGE_ENGLISH 0
#define LANGUAGE_GERMAN  1