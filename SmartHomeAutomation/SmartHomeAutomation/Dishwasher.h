#ifndef DISHWASHER_H
#define DISHWASHER_H
#include "HasMode.h"
class Dishwasher : public HasMode {


public:
    Dishwasher();

    void setMode( std::string  operationType) override;
    std::string getMode() const override;

    void display() const override;  
    double threadLevel() override;
    double getEnergyConsumption() const override;
    void reset() override;
};
#endif