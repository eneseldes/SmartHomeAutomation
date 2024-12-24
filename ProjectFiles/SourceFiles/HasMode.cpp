#include "HasMode.h"

HasMode::HasMode(const std::string &name, int attr, std::string operationType)
    : SettableDevice(name, attr), operationType(operationType) {}

void HasMode::setOperationType(std::string oprType)
{
    operationType = oprType;
}

std::string HasMode::getOperationType() const
{
    return operationType;
}
