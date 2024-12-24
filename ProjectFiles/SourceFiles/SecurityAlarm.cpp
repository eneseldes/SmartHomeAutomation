#include "SecurityAlarm.h"

#include <iostream>

SecurityAlarm::SecurityAlarm(const std::string& name, int voiceLevel) : Device(name), voiceLevel(voiceLevel) {}

void SecurityAlarm::getVoiceLevel() const{
    std::cout << "Voice Level : " << voiceLevel <<std::endl; 
}

void SecurityAlarm::setVoicelLevel(int level){
    voiceLevel = level ;
}

void SecurityAlarm::ring() const{
    std::cout << getName() << " is ringing right now at voice level " << voiceLevel << "!" << std::endl; 
}

void SecurityAlarm::display() const{
    std::cout << "Alarm Name : " << getName() << " , " << "Alarm Voice Level : " << voiceLevel << std::endl;
}

double SecurityAlarm::getEnergyConsumption() const {
    return active ? 15.5 : 0.0;
}

double SecurityAlarm::threadLevel() {
    return 10.0;
}