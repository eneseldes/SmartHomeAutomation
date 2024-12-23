#include "Thermostat.h"

Thermostat::Thermostat(std::string name, int attr) 
    : SettableDevice(name, attr) {}

void Thermostat::heatRoom(Room& room) {
    room.setTemperature(room.getTemperature() + 1);
}

void Thermostat::open() { 
   std::cout << "Thermostatat opened!" << std::endl;
}
void Thermostat::close() { 
   std::cout << "Thermostatat closed!" << std::endl;
}

void Thermostat::display() const { 
    std::cout << "Thermostat: " << getName() << std::endl; 
}

double Thermostat::threadLevel() { 
    return 0.5; 
}

double Thermostat::getEnergyConsumption() const { 
    return 25.0; 
}
