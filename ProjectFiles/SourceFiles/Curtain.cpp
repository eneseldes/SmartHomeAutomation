#include "Curtain.h"

Curtain::Curtain(std::string name, int attr) : SettableDevice(name, attr) {}

void Curtain::open() {
    std::cout << "Curtain opened." << std::endl;
}

void Curtain::close() {
    std::cout << "Curtain closed." << std::endl;
}

void Curtain::display() const { 
    std::cout << "Curtain is in the living room" << std::endl; 
}

double Curtain::getEnergyConsumption() const {
    return 100.0; 
}

double Curtain::threadLevel() {
    return 0.2;  // Örnek bir değer
}
