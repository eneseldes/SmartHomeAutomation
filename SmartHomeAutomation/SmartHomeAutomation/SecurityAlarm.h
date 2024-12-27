#ifndef SECURITYALARM_H
#define SECURITYALARM_H

#include "Device.h"

class SecurityAlarm : public Device {

private:
	int voiceLevel;

public:
	SecurityAlarm();

	void getVoiceLevel() const;
	void setVoicelLevel(int voiceLevel);

	void ring() const;

	void display() const override;

	double getEnergyConsumption() const override;

	double threadLevel() override;

};


#endif