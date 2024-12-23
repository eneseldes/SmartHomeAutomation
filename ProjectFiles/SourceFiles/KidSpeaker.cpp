#include "KidSpeaker.h"
#include <iostream>

// Constructor to initialize the KidSpeaker and associate it with a Child object.
KidSpeaker::KidSpeaker(const std::string& name, int attr, const std::string& defaultMessage, Child* monitoredChild)
    : CanRing(name, attr), message(defaultMessage), child(monitoredChild) {}

// Sets a custom message to play.
void KidSpeaker::setMessage(const std::string& newMessage) {
    message = newMessage;
    std::cout << name << " message updated to: " << message << std::endl;
}

// Monitors the child and triggers the alarm if the child is crying.
void KidSpeaker::monitorChild() {
    if (child->getChildState()) { // Check if the child is crying.
        std::cout << name << " detected that " << child->getNickname() << " is crying." << std::endl;
        std::cout << name << " is playing the message: " << message << std::endl;
        startRinging(); // Start ringing when the child is crying.
    } else {
        std::cout << name << " detected that " << child->getNickname() << " is calm." << std::endl;
    }
}

