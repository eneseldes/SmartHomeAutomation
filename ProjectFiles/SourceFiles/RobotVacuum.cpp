#include "RobotVacuum.h"
#include <iostream>

RobotVacuum::RobotVacuum(std::string const &deviceName,  std::string  operationType)
    : HasMode(deviceName,  operationType){ setOperationType(operationType);}

void RobotVacuum::setOperationType( std::string  operationType) {

    if (operationType == "Normal" )
    {
        HasMode::setOperationType(operationType);
        
    }
   else if (operationType == "Eco")
    {
        HasMode::setOperationType(operationType);
    }
   else if ( operationType == "Wet")
    {
        HasMode::setOperationType(operationType);
    }
    else
    {
        std::cout << "Invalid operation type for RobotVacuum!" << std::endl;
    }

}


std::string RobotVacuum::getOperationType() const{
    if (HasMode::getOperationType() == "Normal")
    {
        return "Normal";
    }
    else if (HasMode::getOperationType() == "Eco")
    {
        return "Eco";
    }
    else if (HasMode::getOperationType() == "Wet")
    {
        return "Wet";
    }
    else
    {
        return "Invalid operation type for RobotVacuum!";
    }
}



void RobotVacuum::selectRoom(const std::string& room) {
    selectedRooms.push_back(room);
    std::cout << "Room selected: " << room << std::endl;
}

void RobotVacuum::displaySelectedRooms() const {
    std::cout << "Selected rooms: " << std::endl;
    for (const auto& room : selectedRooms) {
     
        std::cout << room << std::endl;
    }
}


void RobotVacuum::display() const { 

    std::cout << "Robot Vacuum: " << getName() 
              << " (Mode: " << getOperationType() << ")" << std::endl
              ;
              displaySelectedRooms();
}

double RobotVacuum::threadLevel() { 
    return 0.3;  // Örnek bir değer
}

double RobotVacuum::getEnergyConsumption() const { 
    return 50.0;  // Örnek bir değer
}
