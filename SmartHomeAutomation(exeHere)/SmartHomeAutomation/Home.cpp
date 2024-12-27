#include "Home.h"          // Home sýnýfý tanýmý
#include <fstream>         // Dosya okuma ve yazma
#include <sstream>         // String akýþ iþlemleri
#include <iostream>        // Hata mesajlarý için
#include <algorithm>       // String kýrpma iþlemleri için (opsiyonel)


Home* Home::instance = nullptr;

Home* Home::getInstance()
{
    if (instance == nullptr)
        instance = new Home();

    return instance;
}

void Home::saveState(const std::string& file) {
    std::ofstream outFile(file);
    if (!outFile) {
        std::cerr << "File can not open to write: " << file << std::endl;
        return;
    }

    // Kullanýcý bilgilerini kaydet
    outFile << "Users\n";
    for (const auto& user : users) {
        outFile << user->getNickname() << "," << user->getPassword() << "\n";
    }

    // Oda bilgilerini ve içindeki cihaz isimlerini kaydet
    outFile << "Rooms\n";
    for (const auto& room : rooms) {
        outFile << room->getName() << "\n";
        const auto& devices = room->getDevices();
        for (const auto& device : devices) {
            outFile << "  Device: " << device->getName() << "\n"; // Sadece cihaz ismini kaydediyoruz
        }
    }

    outFile.close();
    std::cout << "Home state saved -> " << file << std::endl;
}


void Home::loadState(const std::string& file) {
    std::cout << "Home State Loaded Succesfully !!" << std::endl;
}

std::vector<User*>& Home::getUsers()
{
    return users;
}

std::vector<Room*>& Home::getRooms()
{
    return rooms;
}