#include "Curtain.h"

Curtain::Curtain() {
    deviceName = "Curtain";
    attribute = 100;
    attributeName = "Open %";
    lowerBound = 0;
    upperBound = 100;
}

void Curtain::display() const { 
    std::cout << "Curtain is in the living room" << std::endl; 
}

double Curtain::getEnergyConsumption() const {
    return 100.0; 
}

double Curtain::threadLevel() {
    return 0.2;
}
