#include "WashingMachine.h"
#include <iostream>

WashingMachine::WashingMachine(const std::string &deviceName, const std::string &operationType)
    : HasMode(deviceName, operationType)
{

    setOperationType(operationType);
}

void WashingMachine::setOperationType(std::string operationType)
{
    if (operationType == "Normal")
    {
        HasMode::setOperationType(operationType);
        setTimer(60);
    }

    else if (operationType == "Sensitive")
    {
        HasMode::setOperationType(operationType);
        cycleValue = 400;
        setTimer(50);
    }
    else if (operationType == "Heavy Duty")
    {
        HasMode::setOperationType(operationType);
        cycleValue = 1200;
        setTimer(120);
    }
    else if (operationType == "Quick")
    {
        HasMode::setOperationType(operationType);
        cycleValue = 600;
        setTimer(15);
    }
    else if (operationType == "Cold Wash")
    {
        HasMode::setOperationType(operationType);
        setTimer(80);
    }
    else
    {
        std::cout << "Invalid operation type for Washing Machine!" << std::endl;
    }
}

std::string WashingMachine::getOperationType() const
{
    if (HasMode::getOperationType() == "Normal")
    {
        return "Normal";
    }
    else if (HasMode::getOperationType() == "Sensitive")
    {
        return "Sensitive";
    }
    else if (HasMode::getOperationType() == "Heavy Duty")
    {
        return "Heavy Duty";
    }
    else if (HasMode::getOperationType() == "Quick")
    {
        return "Quick";
    }
    else if (HasMode::getOperationType() == "Cold Wash")
    {
        return "Cold Wash";
    }
    else
    {
        return "Invalid operation type for Washing Machine!";
    }
}

void WashingMachine::setCycleValue(int val)
{
    cycleValue += val;
}

int WashingMachine::getCycleValue() const
{
    return cycleValue;
}

void WashingMachine::display() const
{
    std::cout << "Washing Machine: " << getName()<< std::endl

              << "(Mode: " << getOperationType() << ")" << std::endl
              << "(Cycle: " << getCycleValue() << ")" << std::endl
              << "(Minute: " << deviceTimer << ")" << std::endl;
}

double WashingMachine::threadLevel()
{
    return 0.8;
}

double WashingMachine::getEnergyConsumption() const
{
    return 90.0;
}
