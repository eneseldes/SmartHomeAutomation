#include "TV.h"

TV::TV() : currentChannel(15) {
    deviceName = "TV";
    attribute = 25;
    lowerBound = 0;
    upperBound = 50;
    attributeName = "Voice Level";
}

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