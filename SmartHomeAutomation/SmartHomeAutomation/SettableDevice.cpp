#include "SettableDevice.h"

SettableDevice::SettableDevice() {}

void SettableDevice::setAttribute(int attr)
{
    attribute = attr;
}

int SettableDevice::getAttribute() const
{
    return attribute;
}

int SettableDevice::getLowerBound() {
    return lowerBound;
}

int SettableDevice::getUpperBound() {
    return upperBound;
}

std::string SettableDevice::getAttributeName() {
    return attributeName;
}