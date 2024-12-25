#ifndef SETTABLEDEVICE_H
#define SETTABLEDEVICE_H

#include "Device.h"
#include <string>

class SettableDevice : public Device
{
protected:
    int attribute;
    int deviceTimer;

public:
    SettableDevice(const std::string &name, int attr);
    SettableDevice(const std::string &name);
    void setAttribute(int attr);
    int getAttribute() const;

    void setTimer(int timer);
    void stopTimer();
};

#endif
