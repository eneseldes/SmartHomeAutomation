#ifndef SETTABLEDEVICE_H
#define SETTABLEDEVICE_H

#include "Device.h"
#include <string> 

class SettableDevice : public Device {
protected:
    int attribute;
    int deviceTimer;

public:
    SettableDevice(const std::string& name, int attr);

    void setAttribute(int attr);
    std::string getAttribute() const;

    void setTimer(int timer);
    void stopTimer();

    // display ve getEnergyConsumption sanal fonksiyonlar
    virtual void display() const = 0;  // Sanal fonksiyon
    virtual double getEnergyConsumption() const = 0;  // Sanal fonksiyon
};

#endif