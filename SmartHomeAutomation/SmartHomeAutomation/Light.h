#ifndef LIGHT_H
#define LIGHT_H

#include "HasMode.h"
#include "SettableDevice.h"

class Light : public SettableDevice {
public:
    Light();

    // Aþaðýdaki metotlarý ekleyin
    void display() const override;  // Display metodu
    double getEnergyConsumption() const override;  // Enerji tüketimi metodu
    double threadLevel() override;  // Ýþlem seviyesi metodu
};

#endif
