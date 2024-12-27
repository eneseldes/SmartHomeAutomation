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
        System::Windows::Forms::MessageBox::Show("You cannot enter the room that you are in.");
        return;
    }

    std::vector<User *>& currentRoomUserList = currentRoom->getUsers();
    std::vector<User *>& newRoomUserList = room->getUsers();

    // Leave currentRoom
    for (int i = 0; i < currentRoomUserList.size(); i++)
        if (this == currentRoomUserList.at(i))
            currentRoomUserList.erase(currentRoomUserList.begin() + i);

    // Visit newRoom
    newRoomUserList.push_back(this);

    currentRoom = room;
    System::Windows::Forms::MessageBox::Show("You entered " + gcnew System::String(currentRoom->getName().c_str()));
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