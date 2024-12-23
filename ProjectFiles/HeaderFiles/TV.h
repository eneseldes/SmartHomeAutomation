#ifndef TV_H
#define TV_H

#include "SettableDevice.h"
#include <iostream>

class TV : public SettableDevice {
private:
    int currentChannel;

public:
    TV(std::string name, int attr, int channel);

    void display() const override;
    double getEnergyConsumption() const override;
    double threadLevel() override;

    // Getter ve Setter fonksiyonları
    int getCurrentChannel() const;  // currentChannel'ı döndüren fonksiyon
    void setChannelTo(int channel);  // currentChannel'ı ayarlayan fonksiyon
};

#endif