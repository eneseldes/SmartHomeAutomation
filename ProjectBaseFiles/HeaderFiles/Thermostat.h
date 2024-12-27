#ifndef THERMOSTAT_H
#define THERMOSTAT_H
#include "SettableDevice.h"
#include "Room.h"

class Thermostat : public SettableDevice {

public:
    Thermostat(std::string name, int attr);

    void heatRoom(Room& room);
    void display() const override;  
    double threadLevel() override;
    double getEnergyConsumption() const override;  
};

#endif