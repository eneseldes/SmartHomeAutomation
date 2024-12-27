#ifndef HOME_H
#define HOME_H

#include <iostream>
#include <vector>
#include <string>

#include "User.h"
#include "Room.h"

class User;
class Room;

class Home
{
private:
    Home() = default;
    Home(const Home&) = delete;
    Home& operator=(const Home&) = delete;
    static Home* instance;

    std::vector<User *> users;
    std::vector<Room *> rooms;

public:
    virtual ~Home() = default;

    static Home* getInstance();

    void saveState(const std::string &file);
    void loadState(const std::string &file);

    std::vector<User *>& getUsers();
    std::vector<Room *>& getRooms();
};

#endif