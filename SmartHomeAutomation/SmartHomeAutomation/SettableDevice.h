#ifndef SETTABLEDEVICE_H
#define SETTABLEDEVICE_H

#include "Device.h"
#include <string>

class SettableDevice : public Device
{
protected:
    int attribute;
    int lowerBound;
    int upperBound;
    std::string attributeName;

public:
    SettableDevice();
    void setAttribute(int attr);
    int getAttribute() const;
    int getLowerBound();
    int getUpperBound();
    std::string getAttributeName();
};

#endif
