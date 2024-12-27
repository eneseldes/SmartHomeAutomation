#include "SecurityCamera.h"
#include <iostream>

SecurityCamera::SecurityCamera(SecurityAlarm* alarm, MotionDetector* motionDetector)
    : SecurityDevice(*alarm), motionDetector(motionDetector) {
    deviceName = "Camera";
}

// detect fonksiyonu : Room içindeki kullanıcıları kontrol eder ve MotionDetector'ı tetikler
void SecurityCamera::detect(Room* room) {
    if (room->hasUsers()) {
        System::String^ usersInRoom = "";
        int userCount = 0;
        for each(User* user in room->getUsers())
        {
            usersInRoom += gcnew System::String(user->getNickname().c_str());
            usersInRoom += " ";
            userCount++;
        }
        System::Windows::Forms::MessageBox::Show(userCount.ToString() + " Person In The Room: " + usersInRoom);
        motionDetector->detect(room); 
    } else {
        System::Windows::Forms::MessageBox::Show("All quiet here.");
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