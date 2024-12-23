#include "Admin.h"

// Constructor
Admin::Admin(const std::string &nickname, int password) : User(nickname, password) {}

void Admin::addUser(Home *home, User *user)
{
    auto &users = home->getUsers();

    // Check if user is already in the system
    for (User *itUser : users)
    {
        if (*itUser == *user)
        {
            std::cout << ">>> PROCESS FAILED: " << user->getNickname() << " is already in the system." << std::endl;
            return;
        }
    }

    // If not, add it and inform of system.
    users.push_back(user);
    std::cout << this->getNickname() << " added " << user->getNickname() << " to the system." << std::endl;
}

void Admin::removeUser(Home *home, User *user)
{
    auto &users = home->getUsers();

    // Search for the user and remove it from the system
    for (int i = 0; i < users.size(); i++)
    {
        if (*users[i] == *user)
        {
            users.erase(users.begin() + i);
            std::cout << this->getNickname() << " removed " << user->getNickname()
                      << " from the system." << std::endl;
            return;
        }
    }

    // If the User could not found in the system
    std::cout << ">>> PROCESS FAILED: " << user->getNickname() << " not found." << std::endl;
}

void Admin::addDevice(Room *room, Device *device)
{
    auto &devices = room->getDevices();

    // Check if device is already in the room
    for (Device *itDevice : devices)
    {
        if (*itDevice == *device)
        {
            std::cout << ">>> PROCESS FAILED: " << device->getName() << " is already in "
                      << room->getName() << std::endl;
            return;
        }
    }

    // If not, add it and inform of system.
    devices.push_back(device);
    std::cout << this->getNickname() << " added a device to  " << room->getName()
              << ": " << device->getName() << std::endl;
}

void Admin::removeDevice(Room *room, Device *device)
{
    auto &devices = room->getDevices();

    // Search for the device and remove it from the room
    for (int i = 0; i < devices.size(); i++)
    {
        if (*devices[i] == *device)
        {
            devices.erase(devices.begin() + i);
            std::cout << this->getNickname() << " removed " << device->getName()
                      << " from " << room->getName() << "." << std::endl;
            return;
        }
    }

    // If the Device could not found in the room
    std::cout << ">>> PROCESS FAILED: " << device->getName() << " not found" << room->getName() << "." << std::endl;
}