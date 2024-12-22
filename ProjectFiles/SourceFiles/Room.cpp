#include "Room.h"

Room::Room(const std::string &name)
    : name(name), temperature(20), airCondition(75) {}

bool Room::hasRisk() const{
        for (const auto& device : devices) {  // roomdaki vektör içi tüm elemanların threadLevel değerlerine bakıp true false döndürsün
            if (device->threadLevel() > 50) { // bu thread değeri değişebilir
                return true;  
            }
        }
        return false; 
}

bool Room::hasUsers() const {
        return users.size() > 0;  // Eğer kullanıcı vektörü boş değilse true döndür
}

int Room::getTemperature() const
{
    return temperature;
}

int Room::getAirCondition() const
{
    return airCondition;
}

std::string Room::getName() const
{
    return name;
}

std::vector<Device *> &Room::getDevices()
{
    return devices;
}
std::vector<User *> &Room::getUsers()
{
    return users;
}

void Room::setTemperature(int temperature)
{
    this->temperature = temperature;
}

void Room::setAirCondition(int airCondition)
{
    this->airCondition = airCondition;
}

// == overload 
bool Room::operator==(Room &other)
{
    return this->name == other.getName();
}