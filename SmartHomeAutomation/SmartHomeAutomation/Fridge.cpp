#include "Fridge.h"

Fridge::Fridge() {
    deviceName = "Fridge";
    attribute = 2;
    lowerBound = -4;
    upperBound = 18;
    attributeName = "Temperature";
}

void Fridge::display() const {  
    std::cout << "Fridge in the kitchen" << std::endl;
}

double Fridge::getEnergyConsumption() const { 
    return 40.0;
}

double Fridge::threadLevel() {
    return 0.8;
}

