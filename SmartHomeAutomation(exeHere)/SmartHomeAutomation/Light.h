#ifndef LIGHT_H
#define LIGHT_H

#include "HasMode.h"
#include "SettableDevice.h"

class Light : public SettableDevice {
public:
    Light();

    // A�a��daki metotlar� ekleyin
    void display() const override;  // Display metodu
    double getEnergyConsumption() const override;  // Enerji t�ketimi metodu
    double threadLevel() override;  // ��lem seviyesi metodu
};

#endif
