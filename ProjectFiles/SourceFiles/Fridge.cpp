#include "Fridge.h"

Fridge::Fridge(std::string name, int attr) : SettableDevice(name, attr) {}

void Fridge::open() { }
void Fridge::close() { }
void Fridge::display() const {  
    std::cout << "Fridge in the kitchen" << std::endl;
}

double Fridge::getEnergyConsumption() const { 
    return 40.0;
}

double Fridge::threadLevel() {
    return 0.8;
}

