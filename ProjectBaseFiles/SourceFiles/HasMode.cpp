#include "HasMode.h"

HasMode::HasMode(const std::string &name, int &attr, std::string operationType)
    : SettableDevice(name, attr), operationType(operationType) {}

HasMode::HasMode(const std::string &name, std::string operationType)
    : SettableDevice(name), operationType(operationType) {}

void HasMode::setOperationType(std::string oprType)
{
    HasMode::operationType = oprType;
}

std::string HasMode::getOperationType() const
{
    return operationType;
}
