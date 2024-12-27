#ifndef FRIDGE_H
#define FRIDGE_H
#include "SettableDevice.h"

class Fridge : public SettableDevice {

public:

    Fridge();

    void display() const override;  
    double getEnergyConsumption() const override;  
    double threadLevel() override;
};

#endif