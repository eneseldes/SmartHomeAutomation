#include "MotionDetector.h"

MotionDetector::MotionDetector(SecurityAlarm* alarm) : Detector(*alarm) {}

void MotionDetector::detect(Room* room) {
    if (room->hasUsers()) {
        std::cout << "Motion detector is calling Security Alarm!!" << std::endl;
        alarm.ring();  // Alarm tetikleniyor
    } else {
        std::cout << "No motion detected. Room is safe right now." << std::endl;
    }
}

void MotionDetector::display() const {
    std::cout << "Motion Detector: " << deviceName << std::endl;
    std::cout << "Status: " << (active ? "Active" : "Inactive") << std::endl;
    std::cout << "Alarm of the Motion Dedector : " << alarm.getName() << std::endl;
}


double MotionDetector::getEnergyConsumption() const {
    return active ? 5.0 : 0.0; 
}

double MotionDetector::threadLevel() {
   return 15.5;
}