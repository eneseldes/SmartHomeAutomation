#ifndef TV_H
#define TV_H

#include "SettableDevice.h"
#include <iostream>

class TV : public SettableDevice {
private:
    int currentChannel;

public:
    TV();

    void changeChannel(bool up); 

    int getCurrentChannel() const;  
    void setChannelTo(int channel);

    void display() const override;
    double getEnergyConsumption() const override;
    double threadLevel() override;
};

#endif
