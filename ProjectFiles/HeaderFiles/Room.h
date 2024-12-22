#ifndef ROOM_H
#define ROOM_H

#include <iostream>
#include <string>
#include <vector>
#include "Device.h"
#include "User.h"

class Device;
class User;

class Room {
private:
    std::string name;
    int temperature;
    int airCondition;
    std::vector<Device *> devices;
    std::vector<User *> users;
    
public:
    Room(const std::string& name);
    virtual ~Room() = default;

    virtual bool hasRisk() const;

    int getTemperature() const;
    int getAirCondition() const;
    std::string getName() const;
    std::vector<Device *>& getDevices();
    std::vector<User *>& getUsers();
    void setTemperature(int temperature);
    void setAirCondition(int airCondition);

    bool operator==(Room &other);
};

#endif