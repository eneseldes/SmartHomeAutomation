#include "Device.h"

Device::Device(const std::string& name) : deviceName(name), active(false) {}

void Device::open() {
    active = true;
    std::cout << deviceName << " is opened." << std::endl;
}

void Device::close() {
    active = false;
    std::cout << deviceName << " is closed." << std::endl;
}

std::string Device::getName() const {
    return deviceName;
}

bool Device::isActive() const {
    return active;
}

void Device::setName(const std::string& name) {
    deviceName = name;
}

void Device::setActive(bool active) {
    this->active = active;
}

bool Device::operator==(Device &other) {
    return this->deviceName == other.getName();
}

