#ifndef SECURITYALARM_H
#define SECURITYALARM_H

#include "Device.h"

#include <iostream>
using namespace std;


class SecurityAlarm : public Device{

private :
int voiceLevel;

public :
SecurityAlarm(const string& name,int voiceLevel);

void getVoiceLevel() const ;
void setVoicelLevel(int voiceLevel);

void ring() const;

void display() const override ;

double getEnergyConsumption() const override;

double threadLevel() override;

} ;


#endif