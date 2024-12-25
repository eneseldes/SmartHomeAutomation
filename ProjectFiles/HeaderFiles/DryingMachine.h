#include "HasMode.h"
#ifndef DRYINGMACHINE_H
#define DRYINGMACHINE_H

class DryingMachine : public HasMode
{

public:
    DryingMachine(std::string const &deviceName, std::string  operationType);

    void setOperationType( std::string  operationType) override;
    std::string getOperationType() const override;


    void display() const override;
    double threadLevel() override;
    double getEnergyConsumption() const override;

};
#endif