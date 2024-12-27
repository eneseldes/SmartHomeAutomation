#include "Oven.h"
#include <iostream>

// Constructor
Oven::Oven() {
    deviceName = "Oven";
    modes = {"Conventional", "Fan", "Grill", "Defrost"};
    temperature = 0;
}

int Oven::getTemperature() {
    return temperature;
}

void Oven::setTemperature(int temperature) {
    this->temperature = temperature;
}

// OperationType set ve get fonksiyonlar�
void Oven::setMode(std::string operationType) {
    for each (std::string mode in modes) {
        if (operationType == mode)
        {
            HasMode::setMode(operationType);
            return;
        }
    }

    System::Windows::Forms::MessageBox::Show("Invalid Mode!");
}

std::string Oven::getMode()const {
    return HasMode::getMode();
}

// Di�er fonksiyonlar
void Oven::display() const {
    
}

double Oven::threadLevel() {
    return 0.8; // �rnek bir thread seviyesi
}

double Oven::getEnergyConsumption() const {
    return 120.0; // �rnek enerji t�ketimi
}

void Oven::reset() {
    HasMode::reset();
    temperature = 0;
}