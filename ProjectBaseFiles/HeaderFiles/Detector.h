#ifndef DETECTOR_H
#define DETECTOR_H

#include "SecurityDevice.h"

class Detector : public SecurityDevice {
public:
    Detector(const std::string& name, const SecurityAlarm& alarm) : SecurityDevice(name, alarm) {}

    void detect(Room* room) =0;
    virtual void display() const=0;
    virtual double getEnergyConsumption() const=0;
    virtual double threadLevel() = 0;

};

#endif