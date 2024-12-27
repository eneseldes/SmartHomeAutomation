#ifndef WASHINGMACHINE_H
#define WASHINGMACHINE_H

#include "HasMode.h"

class WashingMachine : public HasMode
{
private:
    int cycleValue = 800;
    int temperature;
    
public:
    WashingMachine();

    void setMode(std::string operationType) override;
    std::string getMode() const override;

    void display() const override;
    double threadLevel() override;
    double getEnergyConsumption() const override;

    void setCycleValue(int val);
    int getCycleValue() const;
    void setTemperature(int temperature);
    int getTemperature();
    void reset() override;
};

#endif
