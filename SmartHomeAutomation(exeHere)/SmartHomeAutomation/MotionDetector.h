#ifndef MOTIONDETECTOR_H
#define MOTIONDETECTOR_H

#include "Detector.h"

class MotionDetector : public Detector {
public:
    MotionDetector(SecurityAlarm* alarm);

    void detect(Room* room) override;
    void display() const override;
    double getEnergyConsumption() const override;
    double threadLevel() override;
};

#endif