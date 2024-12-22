#ifndef ADMIN_H
#define ADMIN_H

#include "User.h"

// Forward declarations
class Home;
class Room;

class Admin : public User {
public:
    Admin(const std::string& nickname, int password);

    void addUser(Home *home, User *user);
    void removeUser(Home *home, User *user);
    void addDevice(Room *room, Device *device);
    void removeDevice(Room *room, Device *device);
};

#endif