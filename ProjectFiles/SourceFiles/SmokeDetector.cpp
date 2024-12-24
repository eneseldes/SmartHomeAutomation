#include "SmokeDetector.h"
#include <iostream>


void SmokeDetector::detect(Room* room) {
    if (room->hasRisk()) {
        std::cout << "Smoke detected in the room !" << std::endl;
        alarm.ring();  // Tespit edilince alarm çalıyor. 
    } else {
        std::cout << "No smoke detected. Room is safe right now." << std::endl;
    }
}

void SmokeDetector::display() const {
    std::cout << "Smoke Detector : " << deviceName << std::endl;
    std::cout << "Status : " << (active ? "Active" : "Inactive") << std::endl;
    std::cout << "Alarm of the Smoke Dedector : " << alarm.getName() << std::endl;
}

double SmokeDetector::getEnergyConsumption() const {
    return active ? 7.0 : 0.0;  
}

double SmokeDetector::threadLevel()  {
  return 22.0;
}