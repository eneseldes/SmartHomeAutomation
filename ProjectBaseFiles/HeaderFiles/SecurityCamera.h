#ifndef SECURITYCAMERA_H
#define SECURITYCAMERA_H

#include "SecurityDevice.h"
#include "MotionDetector.h"

class SecurityCamera : public SecurityDevice {
private:
    MotionDetector* motionDetector;  // SecurityCamera'nın tetikleyebileceği MotionDetector

public:
    SecurityCamera(const std::string& name, const SecurityAlarm& alarm, MotionDetector* motionDetector);

    void detect(Room* room) override;

    void display() const override;
    double getEnergyConsumption() const override;
    double threadLevel() override;
    
};

#endif