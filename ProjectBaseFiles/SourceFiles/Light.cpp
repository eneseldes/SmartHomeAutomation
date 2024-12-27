#include "Light.h"
#include <iostream>

Light::Light(const std::string &name, int attr, const std::string &operationType, LightColor color)
    : HasMode(name, attr, operationType), currentColor(color) {}

void Light::setColor(LightColor color) {
    currentColor = color;
}

LightColor Light::getColor() const {
    return currentColor;
}

void Light::setOperationType(std::string operationType) {
    HasMode::setOperationType(operationType);
}

std::string Light::getOperationType() const {
    return HasMode::getOperationType();
}

// Implementing the abstract methods from Device
void Light::display() const {
    std::cout << "Device Name: " << getName() << ", Color: " << static_cast<int>(currentColor)
              << ", Operation Type: " << getOperationType() << std::endl;
}

double Light::getEnergyConsumption() const {
    return 15.0;  // Örnek enerji tüketimi (örneðin 15 watt)
}

double Light::threadLevel() {
    return 0.5;  // Örnek iþleme seviyesi (örneðin 0.5)
}
