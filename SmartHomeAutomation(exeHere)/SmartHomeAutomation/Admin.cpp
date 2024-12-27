#include "Admin.h"
#include "Dishwasher.h"
#include "DryingMachine.h"
#include "Fridge.h"
#include "Oven.h"
#include "TV.h"
#include "WashingMachine.h"

// Constructor
Admin::Admin(const std::string &nickname, const std::string& password) : User(nickname, password) {}

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

void Admin::addUser(Home* home, std::string name, std::string password)
{
    User* newUser = new User(name, password);
    auto& users = home->getUsers();

    // Check if user is already in the system
    for (User* itUser : users)
    {
        if (*itUser == *newUser)
        {
            System::Windows::Forms::MessageBox::Show("PROCESS FAILED: There is already a user in the system with the same nickname!");
            return;
        }
    }

    System::Windows::Forms::MessageBox::Show("User added to the system.");
    // If not, add it and inform of system.
    users.push_back(newUser);
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

void Admin::removeUser(Home* home, std::string& nickname)
{
    auto& users = home->getUsers();

    if (users.size() == 0)
    {
        return;
    }

    // Search for the user and remove it from the system
    for (int i = 0; i < users.size(); i++)
    {
        if (users[i]->getNickname() == nickname)
        {
            users.erase(users.begin() + i);
            System::Windows::Forms::MessageBox::Show("User removed from the system!");
            return;
        }
    }

    System::Windows::Forms::MessageBox::Show("PROCESS FAILED: User not found!");
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
    std::cout << this->getNickname() << " added a device to  " << room->getName() << ": " << device->getName() << std::endl;
}

void Admin::addDevice(Home* home, std::string roomName, std::string deviceName)
{
    for each(Room* room in home->getRooms())
    {
        if (room->getName() == roomName)
        {
            // Check if device is already in the room
            for (Device* itDevice : room->getDevices())
            {
                if (itDevice->getName() == deviceName)
                {
                    System::Windows::Forms::MessageBox::Show("PROCESS FAILED: Device is already in the room.");
                    return;
                }
            }
        }
    }

    Device* device;

    if (deviceName == "Dishwasher") {
        device = new Dishwasher();
    }
    else if (deviceName == "DryingMachine") {
        device = new DryingMachine();
    }
    else if (deviceName == "Fridge") {
        device = new Fridge();
    }
    else if (deviceName == "Oven") {
        device = new Oven();
    }
    else if (deviceName == "TV") {
        device = new TV();
    }
    else if (deviceName == "WashingMachine") {
        device = new WashingMachine();
    }

    for each (Room* room in home->getRooms())
    {
        for each (Device * device in room->getDevices())
        {

            room->getDevices().push_back(device);
            System::Windows::Forms::MessageBox::Show(gcnew System::String(device->getName().c_str()) + 
                " is added to " + gcnew System::String(room->getName().c_str()));
        }
    }
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
            std::cout << this->getNickname() << " removed " << device->getName() << " from " << room->getName() << "." << std::endl;
            return;
        }
    }

    // If the Device could not found in the room
    std::cout << ">>> PROCESS FAILED: " << device->getName() << " not found" << room->getName() << "." << std::endl;
}

void Admin::removeDevice(Home* home, std::string roomName, std::string deviceName)
{
    for each (Room* room in home->getRooms())
    {
        if (room->getName() == roomName)
        {
            for (int i = 0; i < room->getDevices().size(); i++)
            {
                if (room->getDevices()[i]->getName() == deviceName)
                {
                    room->getDevices().erase(room->getDevices().begin() + i);
                    System::Windows::Forms::MessageBox::Show("Room is removed from the room.");
                    return;
                }
            }
        }
    }

    System::Windows::Forms::MessageBox::Show("PROGRESS FAILED: Device not found in the room!");
}