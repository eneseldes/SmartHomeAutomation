#include "HasMode.h"
#ifndef DRYINGMACHINE_H
#define DRYINGMACHINE_H

class DryingMachine : public HasMode
{

public:
    DryingMachine();

    void setMode(std::string operationType) override;
    std::string getMode() const override;


    void display() const override;
    double threadLevel() override;
    double getEnergyConsumption() const override;

    void reset();

};
#endif