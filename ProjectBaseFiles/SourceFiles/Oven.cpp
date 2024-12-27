#include "Oven.h"
#include <iostream>

// Constructor
Oven::Oven(const std::string &name, int &attr, const std::string &operationType, OvenCookMode cookMode)
    : HasMode(name, attr, operationType), currentCookMode(cookMode) {}

// Getter ve Setter
OvenCookMode Oven::getCookMode() const {
    return currentCookMode;
}

void Oven::setCookMode(OvenCookMode cookMode) {
    currentCookMode = cookMode;
}

// OperationType set ve get fonksiyonlarý
void Oven::setOperationType(std::string operationType) {
    HasMode::setOperationType(operationType);
}

std::string Oven::getOperationType() const {
    return HasMode::getOperationType();
}

// Diðer fonksiyonlar
void Oven::display() const {
    std::cout << "Oven: " << getName() << " (Mode: " << getOperationType() << ")\n"
              << "Cook Mode: " << static_cast<int>(currentCookMode) << std::endl;
}

double Oven::threadLevel() {
    return 0.8; // Örnek bir thread seviyesi
}

double Oven::getEnergyConsumption() const {
    return 120.0; // Örnek enerji tüketimi
}
