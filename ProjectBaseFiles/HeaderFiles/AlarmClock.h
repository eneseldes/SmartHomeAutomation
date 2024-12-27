#ifndef ALARMCLOCK_H
#define ALARMCLOCK_H

#include "CanRing.h"
#include <string>

// AlarmClock class inherits from CanRing and represents an alarm clock device.
class AlarmClock : public CanRing {
private:
    int alarmTime; // Stores the set alarm time (e.g., in seconds).

public:
    // Constructor to initialize the AlarmClock with a name, attribute, and initial alarm time.
    AlarmClock(const std::string& name, int attr, int initialTime);

    // Sets the alarm time.
    void setAlarm(int time);

    // Activates the alarm when the set time is reached.
    void activateAlarm();

    void display() const override; 
    double getEnergyConsumption() const override;
    double threadLevel() override;
};

#endif

