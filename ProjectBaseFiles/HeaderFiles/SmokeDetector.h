#ifndef SMOKEDETECTOR_H
#define SMOKEDETECTOR_H

#include "Detector.h"


class SmokeDetector : public Detector {
public:
    SmokeDetector(const std::string& name, const SecurityAlarm& alarm)
        : Detector(name, alarm) {}

    void detect(Room* room) override;
    void display() const override;
    double getEnergyConsumption() const override;
    double threadLevel() override;
};

#endif