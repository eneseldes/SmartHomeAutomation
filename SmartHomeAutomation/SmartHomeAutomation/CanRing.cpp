#include "CanRing.h"
#include <iostream>

// Constructor
CanRing::CanRing() : isRinging(false) {}

// Start ringing
void CanRing::startRinging() {
    if (!isRinging) {
        isRinging = true;
        std::cout << deviceName << " is now ringing!" << std::endl;
    } else {
        std::cout << deviceName << " is already ringing." << std::endl;
    }
}

// Stop ringing
void CanRing::stopRinging() {
    if (isRinging) {
        isRinging = false;
        std::cout << deviceName << " has stopped ringing!" << std::endl;
    } else {
        std::cout << deviceName << " is not ringing." << std::endl;
    }
}

// Check if the device is ringing
bool CanRing::getRingStatus() const {
    return isRinging;
}

// Ring the device for a specified duration
void CanRing::ringFor(int duration) {
    if (duration <= 0) {
        std::cout << "Invalid duration. Cannot ring." << std::endl;
        return;
    }

    // Start ringing
    startRinging();

    std::cout << deviceName << " will stop ringing after " << duration << " seconds." << std::endl;

    // Simulate the ringing process (no actual delay)
    for (int i = 1; i <= duration; ++i) {
        std::cout << "Ringing for " << i << " second(s)." << std::endl;
    }

    stopRinging();
}
