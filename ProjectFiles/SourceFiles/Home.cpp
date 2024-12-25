#include "Home.h"

Home* Home::instance = nullptr;

Home *Home::getInstance()
{
    if (instance == nullptr)
        instance = new Home();

    return instance;
}

void Home::saveState(const std::string &file)
{

    std::cout << "State saved to " << file << std::endl;
}

void Home::loadState(const std::string &file)
{

    std::cout << "State loaded from " << file << std::endl;
}

std::vector<User *> &Home::getUsers()
{
    return users;
}

std::vector<Room *> &Home::getRooms()
{
    return rooms;
}