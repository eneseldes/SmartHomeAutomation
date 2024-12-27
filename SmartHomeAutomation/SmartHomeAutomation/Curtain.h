#ifndef CURTAIN_H
#define CURTAIN_H

#include "SettableDevice.h"
#include <iostream>

class Curtain : public SettableDevice {

public:
    Curtain();

    void display() const override; 
    double getEnergyConsumption() const override;
    double threadLevel() override;
};

#endif
