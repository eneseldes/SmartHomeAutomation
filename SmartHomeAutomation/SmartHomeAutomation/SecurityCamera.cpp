#include "SecurityCamera.h"
#include <iostream>

SecurityCamera::SecurityCamera(SecurityAlarm* alarm, MotionDetector* motionDetector)
    : SecurityDevice(*alarm), motionDetector(motionDetector) {
    deviceName = "Camera";
}

// detect fonksiyonu : Room içindeki kullanıcıları kontrol eder ve MotionDetector'ı tetikler
void SecurityCamera::detect(Room* room) {
    if (room->hasUsers()) {
        std::cout << "Users detected in the room. Triggering Motion Detector..." << std::endl;
        motionDetector->detect(room); 
    } else {
        std::cout << "No users detected in the room." << std::endl;
    }
}

void SecurityCamera::display() const {
    std::cout << "Security Camera: " << deviceName << std::endl;
    std::cout << "Status: " << (active ? "Active" : "Inactive") << std::endl;
    std::cout << "Motion Detector of the Security Camera : " << motionDetector->getName() << std::endl;
    std::cout << "Alarm of the Motion Dedector : " << alarm.getName() << std::endl;
}

double SecurityCamera::getEnergyConsumption() const {
    double baseConsumption = active ? 20.0 : 0.0; 
    if (motionDetector && motionDetector->isActive()) {
        baseConsumption += 5.0;  // Motion Detector açıkken ek 5 birim enerji tüketir.
    }
    return baseConsumption;
}

double SecurityCamera::threadLevel() {
    return 32.0;
}