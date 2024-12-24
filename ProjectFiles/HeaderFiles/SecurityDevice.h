#ifndef SECURITYDEVICE_H
#define SECURITYDEVICE_H

#include "Device.h"
#include "SecurityAlarm.h"
#include "Room.h"

class SecurityDevice : public Device {
protected:
    SecurityAlarm alarm;

public:
    SecurityDevice(const std::string& name,const SecurityAlarm& alarm);

    virtual void detect(Room* room)=0; // Room üzerinde risk tespitini yapar, bu fonksiyonu subclasslarda override etmek gereklidir.
    virtual void display() const=0;
    virtual double getEnergyConsumption() const=0;
    virtual double threadLevel() =0;
};

#endif