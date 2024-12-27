#ifndef USER_H
#define USER_H

#include <string>
#include <vector>
#include "Room.h"
#include "Home.h"

class Home;

class User {
protected:
    std::string nickname;
    std::string password;
    bool loggedIn;
    Room* currentRoom;

public:
    User(const std::string& nickname, const std::string& password);
    virtual ~User() = default;

    void login(Home home, const std::string& nickname, std::string password);
    void logout(Home home);
    void visitRoom(Room* room);

    std::string getNickname();
    std::string getPassword();
    bool isLoggedIn();
    Room* getCurrentRoom();
    void setNickname(const std::string& nickname);
    void setPassword(std::string password);
    void setLoggedIn(bool loggedIn);
    void setCurrentRoom(Room* room);

    bool operator==(User& other);
};

#endif