#include "Thermostat.h"

Thermostat::Thermostat() {
    deviceName = "Thermostat";
    attribute = 20;
    lowerBound = 13;
    upperBound = 25;
    attributeName = "Temperature";
}

void Thermostat::heatRoom(Room& room) {
    room.setTemperature(room.getTemperature() + 1);
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
