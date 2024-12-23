#include "SettableDevice.h"

SettableDevice::SettableDevice(const std::string& name, int attr)
    : Device(name), attribute(attr), deviceTimer(0) {}

void SettableDevice::setAttribute(int attr) {
    attribute = attr;
}

std::string SettableDevice::getAttribute() const {
    return std::to_string(attribute);
}

void SettableDevice::setTimer(int timer) {
    deviceTimer = timer;
}

void SettableDevice::stopTimer() {
    deviceTimer = 0;
}
