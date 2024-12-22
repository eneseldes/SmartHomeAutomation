#include "Home.h"

Home::Home() {}

void Home::saveState(const std::string &file)
{
    // PROJE TAMAMLANINCA BAK
    std::cout << "State saved to " << file << std::endl;
}

void Home::loadState(const std::string &file)
{
    // PROJE TAMAMLANINCA BAK
    std::cout << "State loaded from " << file << std::endl;
}

std::vector<User *>& Home::getUsers()
{
    return users;
}

std::vector<Room *>& Home::getRooms()
{
    return rooms;
}