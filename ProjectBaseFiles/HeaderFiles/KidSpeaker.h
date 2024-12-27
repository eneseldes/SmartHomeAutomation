#ifndef KIDSPEAKER_H
#define KIDSPEAKER_H

#include "CanRing.h"
#include "Child.h"
#include <string>

// KidSpeaker class inherits from CanRing and interacts with Child to respond when the child is crying.
class KidSpeaker : public CanRing {
private:
    Child* child;         // Pointer to the Child object to monitor.
    std::string message;  // Message to play when alarm is triggered.

public:
    // Constructor to initialize the KidSpeaker with a name, attribute, and default message.
    KidSpeaker(const std::string& name, int attr, const std::string& defaultMessage, Child* monitoredChild);

    // Sets a custom message to play.
    void setMessage(const std::string& newMessage);

    // Monitors the child and triggers the alarm if the child is crying.
    void monitorChild();

    void display() const override;  
    double threadLevel() override;
    double getEnergyConsumption() const override;  
};

#endif
