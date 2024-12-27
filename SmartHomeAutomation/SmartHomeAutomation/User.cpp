#include "User.h"

// Constructor
User::User(const std::string &nickname, const std::string& password) : nickname(nickname), password(password)
{
    currentRoom = new Room("Outside"); // Outside as default
}

void User::login(Home home, const std::string &nickname, std::string password)
{
    if (this->nickname == nickname && this->password == password)
    {
        loggedIn = true;
        std::cout << nickname << " logged in." << std::endl;
    }
}

void User::logout(Home home)
{
    loggedIn = false;
    std::cout << nickname << " logged out." << std::endl;
}

void User::visitRoom(Room *room)
{
    // Check visited room is the current room
    if (room == currentRoom)
    {
        std::cout << ">>> PROCESS FAILED: " << this->getNickname() << " is already in "
                << currentRoom->getName() << "." << std::endl;
        return;
    }

    std::vector<User *> currentRoomUserList = currentRoom->getUsers();
    std::vector<User *> newRoomUserList = room->getUsers();

    // Leave currentRoom
    for (int i = 0; i < currentRoomUserList.size(); i++)
        if (this == currentRoomUserList.at(i))
            currentRoomUserList.erase(currentRoomUserList.begin() + i);

    // Visit newRoom
    newRoomUserList.push_back(this);

    std::cout << nickname << " moved into " << room->getName() << " from "
        << currentRoom->getName() << "." << std::endl;
}

std::string User::getNickname()
{
    return nickname;
}

std::string User::getPassword()
{
    return password;
}

bool User::isLoggedIn()
{
    return loggedIn;
}

Room *User::getCurrentRoom()
{
    return currentRoom;
}

void User::setNickname(const std::string &nickname)
{
    this->nickname = nickname;
}

void User::setPassword(std::string password)
{
    this->password = password;
}

void User::setLoggedIn(bool loggedIn)
{
    this->loggedIn = loggedIn;
}

void User::setCurrentRoom(Room *room)
{
    this->currentRoom = currentRoom;
}

// == overload 
bool User::operator==(User &other)
{
    return this->nickname == other.getNickname();
}