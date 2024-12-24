#ifndef HASMODE_H
#define HASMODE_H

#include "SettableDevice.h"

class HasMode : public SettableDevice
{
private:
    std::string operationType;

public:
    HasMode(const std::string &name, int attr, std::string operationType);
    virtual void setOperationType(std::string operationType);
    virtual std::string getOperationType() const;
};

#endif
