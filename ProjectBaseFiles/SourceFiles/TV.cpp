#include "TV.h"

TV::TV(const std::string &deviceName, int attr, int channel) 
    : SettableDevice(deviceName, attr), currentChannel(channel) {}

void TV::changeChannel(bool up) {
    if (up)
        currentChannel++;
    else
        currentChannel--;
    
}

int TV::getCurrentChannel() const {
    return currentChannel;  
}

void TV::setChannelTo(int channel) {
    currentChannel = channel;  
}

void TV::display() const {  
    std::cout << "TV Name: " << getName() << ", Current Channel: " << currentChannel << std::endl;
}

double TV::getEnergyConsumption() const {  
    return 50.0; 
}

double TV::threadLevel() {
    return 0.5;  
}