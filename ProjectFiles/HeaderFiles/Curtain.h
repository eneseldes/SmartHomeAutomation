#ifndef CURTAIN_H
#define CURTAIN_H

#include "SettableDevice.h"
#include <iostream>

class Curtain : public SettableDevice {

public:
    Curtain(std::string name, int attr);

    void open() override;
    void close() override;
    void display() const override; 
    double getEnergyConsumption() const override;
    double threadLevel() override;
};

#endif
