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

    
    virtual void display() const = 0; 
    virtual double getEnergyConsumption() const = 0;  
};

#endif
