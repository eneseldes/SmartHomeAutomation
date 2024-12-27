#ifndef ADMIN_H
#define ADMIN_H

#include "User.h"

// Forward declarations
class Home;
class Room;

class Admin : public User {
public:
    Admin(const std::string& nickname, const std::string& password);

    void addUser(Home *home, User *user);
    void addUser(Home* home, std::string name, std::string password);
    void removeUser(Home *home, User *user);
    void removeUser(Home* home, std::string& nickname);
    void addDevice(Room *room, Device *device);
    void addDevice(Home* home, std::string roomName, std::string deviceName);
    void removeDevice(Room *room, Device *device);
    void removeDevice(Home* home, std::string roomName, std::string deviceName);
};

#endif