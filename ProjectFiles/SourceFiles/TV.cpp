#include "TV.h"

TV::TV(string name, int attr, int channel) : SettableDevice(name, attr), currentChannel(channel) {}

int TV::getCurrentChannel() const {
    return currentChannel;
}

void TV::setChannelTo(int channel){
    currentChannel = channel;
}

void TV::changeChannel(bool up){
    currentChannel += (up ? 1 : -1);
}

void TV::open() {}
void TV::close() {}
void TV::display() {}
double TV::threadLevel() { return 1.0;}
double TV::getEnergyConsumption() { return 50.0;}