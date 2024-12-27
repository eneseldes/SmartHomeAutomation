#include "KidSpeaker.h"
#include "Child.h"
#include <iostream>

// Constructor to initialize the KidSpeaker and associate it with a Child object.
KidSpeaker::KidSpeaker(Child* monitoredChild)
    :  child(monitoredChild) {
    // Constructor implementation
    deviceName = "KidSpeaker";
    attribute = 25;
    lowerBound = 0;
    upperBound = 50;
    attributeName = "Voice Level";
}

// Sets a custom message to play.
void KidSpeaker::setMessage(const std::string& newMessage) {
    message = newMessage;
    std::cout << deviceName << " message updated to: " << message << std::endl;
}

// Monitors the child and triggers the alarm if the child is crying.
void KidSpeaker::monitorChild() {
    if (child->getChildState()) { // Check if the child is crying.
        std::cout << deviceName << " detected that " << child->getNickname() << " is crying." << std::endl;
        std::cout << deviceName << " is playing the message: " << message << std::endl;
        startRinging(); // Start ringing when the child is crying.
    } else {
        std::cout << deviceName << " detected that " << child->getNickname() << " is calm." << std::endl;
    }
}

void KidSpeaker::display() const { 
    std::cout << "Curtain is in the living room" << std::endl; 
}

double KidSpeaker::getEnergyConsumption() const {
    return 100.0; 
}

double KidSpeaker::threadLevel() {
    return 0.2;
}