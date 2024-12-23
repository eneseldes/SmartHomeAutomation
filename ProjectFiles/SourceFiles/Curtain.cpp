#include "Curtain.h"

Curtain::Curtain(std::string name, int attr) : SettableDevice(name, attr) {}

void Curtain::display() const { 
    std::cout << "Curtain is in the living room" << std::endl; 
}

double Curtain::getEnergyConsumption() const {
    return 100.0; 
}

double Curtain::threadLevel() {
    return 0.2;
}
