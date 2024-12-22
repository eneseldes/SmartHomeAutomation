#include "Device.h"

// Constructor
Device::Device(const std::string& name) : name(name) {}

void Device::open() {
    active = true;
    std::cout << name << " is opened." << std::endl;
}

void Device::close() {
    active = false;
    std::cout << name << " is closed." << std::endl;
}

void Device::display() const {
    std::cout << name << "is " << (active ? "active. " : "deactived. ") << std::endl;
}

double Device::threadLevel() const {
    return 0.0; // Default implementation
}

std::string Device::getName() const {
    return name;
}

bool Device::isActive() {
    return active;
}

void Device::setName(const std::string& name) {
    this->name = name;
}

void Device::setActive(bool active) {
    this->active = active;
}

// == overload 
bool Device::operator==(Device &other) {
    return name == other.getName();
}