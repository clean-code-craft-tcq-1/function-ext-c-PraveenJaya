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

#define BATTERY_HEALTH_OK 1
#define BATTERY_HEALTH_NOT_OK 0