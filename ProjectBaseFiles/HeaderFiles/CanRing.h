#ifndef CANRING_H
#define CANRING_H

#include "SettableDevice.h"
#include <string>

class CanRing : public SettableDevice {
private:
    bool isRinging; // To track if the device is ringing or not

public:
    // Constructor to initialize CanRing with a name, attribute, and default isRinging as false
    CanRing(const std::string& name, int attr);

    // Start ringing the device
    void startRinging();

    // Stop ringing the device
    void stopRinging();

    // Check if the device is currently ringing
    bool getRingStatus() const;

    // Ring the device for a specified duration
    void ringFor(int duration);
};

#endif
