#include "AlarmClock.h"
#include <iostream>

// Constructor to initialize the AlarmClock.
AlarmClock::AlarmClock(const std::string& name, int attr, int initialTime)
    : CanRing(name, attr), alarmTime(initialTime) {}

// Sets the alarm time.
void AlarmClock::setAlarm(int time) {
    alarmTime = time;
    std::cout << deviceName << " alarm time set to " << time << " seconds." << std::endl;
}

// Activates the alarm when the set time is reached.
void AlarmClock::activateAlarm() {
    std::cout << deviceName << " alarm is activated!" << std::endl;
    ringFor(alarmTime); // Uses the CanRing functionality to ring for the alarm time.
}

void AlarmClock::display() const { 
    std::cout << "Thermostat: " << getName() << std::endl; 
}

double AlarmClock::threadLevel() { 
    return 0.5; 
}

double AlarmClock::getEnergyConsumption() const { 
    return 25.0; 
}