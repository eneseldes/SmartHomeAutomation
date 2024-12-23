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
    int password;
    bool loggedIn;
    Room* currentRoom;

public:
    User(const std::string& nickname, int password);
    virtual ~User() = default;

    void login(Home home, const std::string& nickname, int password);
    void logout(Home home);
    void enterHome(Home& home);
    void exitHome(Home& home);
    void visitRoom(Room* room);

    std::string getNickname();
    int getPassword();
    bool isLoggedIn();
    Room* getCurrentRoom();
    void setNickname(const std::string& nickname);
    void setPassword(int password);
    void setLoggedIn(bool loggedIn);
    void setCurrentRoom(Room* room);

    bool operator==(User& other);
};

#endif