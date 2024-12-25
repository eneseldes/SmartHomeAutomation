#include "Dishwasher.h"
#include <iostream>

Dishwasher::Dishwasher(std::string const &deviceName,  std::string  operationType)
    : HasMode(deviceName, operationType)  { setOperationType(operationType);}

void Dishwasher::setOperationType( std::string  operationType) {

    if (operationType == "Normal")
    {
        HasMode::setOperationType(operationType);
        setTimer(120);
    }
    else if(operationType == "Eco"){
        HasMode::setOperationType(operationType);
         setTimer(100);
    }
    else if(operationType == "Intensive"){
        HasMode::setOperationType(operationType);
        setTimer(160);
    }
    else if(operationType == "Quick"){
        HasMode::setOperationType(operationType);
        setTimer(60);
    }
    else if(operationType == "RinseOnly"){
        HasMode::setOperationType(operationType);
        setTimer(40);
    }
    else
    {
        std::cout << "Invalid operation type for Dishwasher!" << std::endl;
    }

}

std::string Dishwasher::getOperationType() const {
    if (HasMode::getOperationType() == "Normal")
    {
        return "Normal";
    }
    else if (HasMode::getOperationType() == "Eco")
    {
        return "Eco";
    }
    else if (HasMode::getOperationType() == "Intensive")
    {
        return "Intensive";
    }
    else if (HasMode::getOperationType() == "Quick")
    {
        return "Quick";
    }
    else if (HasMode::getOperationType() == "RinseOnly")
    {
        return "RinseOnly";
    }
    else
    {
        return "Invalid operation type for Dishwasher!";
    }
}


void Dishwasher::display() const { 
    std::cout << "Dishwasher: " << getName() << " (Mode: " 
              << getOperationType() << ")" << std::endl
              
              <<"(Minute: " << deviceTimer << ")" << std::endl;

}

double Dishwasher::threadLevel() { 
    return 0.5; 
}

double Dishwasher::getEnergyConsumption() const { 
    return 70.0; 
}
