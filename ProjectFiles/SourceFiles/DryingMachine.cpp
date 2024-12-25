#include <iostream>
#include "DryingMachine.h"

DryingMachine::DryingMachine(std::string const  &deviceName, std::string  operationType)
    : HasMode(deviceName, operationType){ setOperationType(operationType);}
 
void DryingMachine::setOperationType( std::string  operationType) {
    if (operationType == "Normal")
    {
        HasMode::setOperationType(operationType);
        setTimer(120);
    }
    else if(operationType == "Delicate"){
        HasMode::setOperationType(operationType);
         setTimer(70);
    }
    else if(operationType == "Baby"){
        HasMode::setOperationType(operationType);
        setTimer(80);
    }
    else if(operationType == "Quick"){
        HasMode::setOperationType(operationType);
        setTimer(60);
    }
    else if(operationType == "Synthetic"){
        HasMode::setOperationType(operationType);
        setTimer(100);
    }
    else if(operationType == "AntiWrinkle"){
        HasMode::setOperationType(operationType);
        setTimer(160);
    }
    else
    {
        std::cout << "Invalid operation type for Drying Machine!" << std::endl;
    }
}

std::string DryingMachine::getOperationType() const {

    if (HasMode::getOperationType() == "Normal")
    {
        return "Normal";
    }
    else if (HasMode::getOperationType() == "Delicate")
    {
        return "Delicate";
    }
    else if (HasMode::getOperationType() == "Baby")
    {
        return "Baby";
    }
    else if (HasMode::getOperationType() == "Quick")
    {
        return "Quick";
    }
    else if (HasMode::getOperationType() == "Synthetic")
    {
        return "Synthetic";
    }
    else if (HasMode::getOperationType() == "AntiWrinkle"){
      return "AntiWrinkle";
    }
    else
    {
        return "Invalid operation type for Drying Machine!";
    }
}


void DryingMachine::display() const { 
    std::cout << "DryingMachine: " << getName() << " (Mode: " 
              << getOperationType() << ")" << std::endl
              <<"(Minute: " << deviceTimer << ")" << std::endl;
}

double DryingMachine::threadLevel() { 
    return 0.6; 
}

double DryingMachine::getEnergyConsumption() const { 
    return 75.0; 
}
