#ifndef ROBOTVACUUM_H
#define ROBOTVACUUM_H

#include "HasMode.h"
#include <string>
#include <vector>

class RobotVacuum : public HasMode {
public:
    RobotVacuum(std::string const &deviceName, std::string  operationType);

    void setOperationType( std::string  operationType) override;
    std::string getOperationType() const override;

    void selectRoom(const std::string& room);
    void displaySelectedRooms() const;

    void display() const override;  
    double threadLevel() override;
    double getEnergyConsumption() const override;  

private:
    std::vector<std::string> selectedRooms;
};

#endif
