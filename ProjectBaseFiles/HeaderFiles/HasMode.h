#ifndef HASMODE_H
#define HASMODE_H

#include "SettableDevice.h"

class HasMode : public SettableDevice
{
private:
    std::string operationType;

public:
    HasMode(const std::string &name, int &attr, std::string operationType);
    HasMode(const std::string &name, std::string operationType);
    virtual void setOperationType(std::string operationType) = 0;
    virtual std::string getOperationType() const = 0;
};

#endif
