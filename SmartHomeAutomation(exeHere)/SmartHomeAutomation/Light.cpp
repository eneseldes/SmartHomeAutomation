#include "Light.h"

Light::Light() {
	Device::deviceName = "Light";
	attribute = 0;
	lowerBound = 0;
	upperBound = 100;
	attributeName = "Brightness";
}

// Implementing the abstract methods from Device
void Light::display() const {
	
}

double Light::getEnergyConsumption() const {
	return 15.0;  // �rnek enerji t�ketimi (�rne�in 15 watt)
}

double Light::threadLevel() {
	return 0.5;  // �rnek i�leme seviyesi (�rne�in 0.5)
}