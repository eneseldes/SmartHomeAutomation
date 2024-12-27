#include <iostream>
#include "KidSpeaker.h"
#include "Child.h"
#include "CanRing.h"
#include "TV.h"
#include "Thermostat.h"
#include "Fridge.h"
#include "Curtain.h"
#include "Room.h"
#include "Home.h"
#include "Admin.h"
#include "Light.h"

using namespace std;

Home *home = Home::getInstance();

int main() {
    // Admin oluşturuluyor
    Admin *admin = new Admin("admin", 12345);
    admin->addUser(home, new User("admin", 12345));

    // Oda ekleniyor
    home->getRooms().push_back(new Room("Kitchen"));
    home->getRooms().push_back(new Room("LivingRoom"));
    home->getRooms().push_back(new Room("Bathroom"));
    home->getRooms().push_back(new Room("Bedroom"));
    home->getRooms().push_back(new Room("ChildRoom"));

    // Kullanıcı ekleniyor
    User* user1 = new User("user1", 12345);
    User* user2 = new User("user2", 12345);
    admin->addUser(home, user1);
    admin->addUser(home, user2);

    // Çocuk nesnesi oluşturuluyor
    Child* child1 = new Child("John", 12345);

    // KidSpeaker nesnesi oluşturuluyor ve Child nesnesine bağlanıyor
    KidSpeaker* kidSpeaker1 = new KidSpeaker("Kid Speaker", 10, "Please stop crying!", child1);

    // Çocuğu kontrol et, eğer ağlıyorsa KidSpeaker alarm çalsın
    cout << "John starts crying..." << endl;
    child1->cry(); // Çocuk ağlamaya başlıyor
    kidSpeaker1->monitorChild(); // Çocuğu izlemeye başla

    // KidSpeaker sesli yanıt veriyor
    kidSpeaker1->monitorChild(); // Ağlamayı kontrol et ve yanıt ver

    // Çocuğu sakinleştir
    cout << "John is being soothed..." << endl;
    child1->sootheChild(); // Çocuk sakinleşiyor

    // Çocuk sakinleştiğinde KidSpeaker durmalı
    if (!child1->getChildState()) {
        cout << "John is calm, stopping KidSpeaker." << endl;
        kidSpeaker1->stopRinging(); // Çocuk sakinleşti, alarm durduruluyor
    }

    // TV, Thermostat, Fridge, Curtain cihazları oluşturuluyor
    TV tv1("Samsung TV", 5, 101);
    Thermostat thermostat1("Nest Thermostat", 2);
    Fridge fridge1("LG Fridge", 3);
    Curtain curtain1("Living Room Curtain", 1);

    cout << "Device: " << tv1.getName() << " | Attribute: " << tv1.getAttribute() << endl;
    cout << "Device: " << thermostat1.getName() << " | Attribute: " << thermostat1.getAttribute() << endl;
    cout << "Device: " << fridge1.getName() << " | Attribute: " << fridge1.getAttribute() << endl;
    cout << "Device: " << curtain1.getName() << " | Attribute: " << curtain1.getAttribute() << endl;

    // Cihazları aç
    tv1.open();
    thermostat1.open();
    fridge1.open();
    curtain1.open();

    // TV kanalını ayarla
    tv1.setChannelTo(202);
    cout << "TV current channel: " << tv1.getCurrentChannel() << endl;

    // Odayı ısıt
    Room room1("Living Room");
    thermostat1.heatRoom(room1);
    cout << "Room temperature: " << room1.getTemperature() << "°C" << endl;

    // Zamanlayıcıyı durdur
    tv1.stopTimer();
    thermostat1.stopTimer();

    // Enerji tüketimi hesapla
    cout << "TV energy consumption: " << tv1.getEnergyConsumption() << " W" << endl;
    cout << "Thermostat energy consumption: " << thermostat1.getEnergyConsumption() << " W" << endl;
    cout << "Fridge energy consumption: " << fridge1.getEnergyConsumption() << " W" << endl;
    cout << "Curtain energy consumption: " << curtain1.getEnergyConsumption() << " W" << endl;

    // Thread seviyesini göster
    cout << "TV thread level: " << tv1.threadLevel() << endl;
    cout << "Thermostat thread level: " << thermostat1.threadLevel() << endl;
    cout << "Fridge thread level: " << fridge1.threadLevel() << endl;
    cout << "Curtain thread level: " << curtain1.threadLevel() << endl;

    // Cihazları kapat
    tv1.close();
    thermostat1.close();
    fridge1.close();
    curtain1.close();

    // Temizlik
    delete child1;
    delete kidSpeaker1;
    delete user1;
    delete user2;
    delete admin;

    return 0;
}