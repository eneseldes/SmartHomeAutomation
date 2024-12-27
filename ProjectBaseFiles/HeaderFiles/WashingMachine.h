#ifndef WASHINGMACHINE_H
#define WASHINGMACHINE_H

#include "HasMode.h"
#include <iostream>

class WashingMachine : public HasMode
{
private:
    int cycleValue = 800;
    
public:
    WashingMachine(const std::string &deviceName, const std::string &operationType);

    void setOperationType(std::string operationType) override;
    std::string getOperationType() const override;

    void display() const override;
    double threadLevel() override;
    double getEnergyConsumption() const override;

    void setCycleValue(int val);
    int getCycleValue() const;
};

#endif
