#ifndef DISHWASHER_H
#define DISHWASHER_H
#include "HasMode.h"
class Dishwasher : public HasMode {


public:
    Dishwasher(std::string const &deviceName, std::string  operationType);

    void setOperationType( std::string  operationType) override;
    std::string getOperationType() const override;

    void display() const override;  
    double threadLevel() override;
    double getEnergyConsumption() const override;

};
#endif