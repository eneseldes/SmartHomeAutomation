#include "SettableDevice.h"

SettableDevice::SettableDevice(const std::string &name, int attr)
    : Device(name), attribute(attr), deviceTimer(0) {}

SettableDevice::SettableDevice(const std::string &name)
    : Device(name), deviceTimer(0) {}

void SettableDevice::setAttribute(int attr)
{
    attribute = attr;
}

int SettableDevice::getAttribute() const
{
    return attribute;
}

void SettableDevice::setTimer(int timer)
{
    deviceTimer = timer;
}

void SettableDevice::stopTimer()
{
    deviceTimer = 0;
}