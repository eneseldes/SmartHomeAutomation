#ifndef FRIDGE_H
#define FRIDGE_H
#include "SettableDevice.h"

class Fridge : public SettableDevice {

public:

    Fridge(std::string name, int attr);

    void open() override;
    void close() override;
    void display() const override;  // const burada da var
    double getEnergyConsumption() const override;  // const burada da var
    double threadLevel() override;
};

#endif