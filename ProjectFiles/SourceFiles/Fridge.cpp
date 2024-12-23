#include "Fridge.h"

Fridge::Fridge(std::string name, int attr) : SettableDevice(name, attr) {}

void Fridge::open() {  }
void Fridge::close() {  }
void Fridge::display() {  }

double Fridge::threadLevel() {
    return 0.8;
}

double Fridge::getEnergyConsumption() {
    return 40.0;
}