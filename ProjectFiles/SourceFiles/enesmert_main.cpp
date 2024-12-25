#include <iostream>
#include "KidSpeaker.h"
#include "Child.h"
#include "CanRing.h"
#include "TV.h"
#include "Thermostat.h"
#include "Fridge.h"
#include "Curtain.h"
#include "Light.h"
#include "Oven.h"
#include "Room.h"
#include "Home.h"
#include "Admin.h"

using namespace std;

Home *home = new Home();

int main() {
    // Admin olu�turuluyor
    Admin *admin = new Admin("admin", 12345);
    admin->addUser(home, new User("admin", 12345));

    // Oda ekleniyor
    home->getRooms().push_back(new Room("Kitchen"));
    home->getRooms().push_back(new Room("LivingRoom"));
    home->getRooms().push_back(new Room("Bathroom"));
    home->getRooms().push_back(new Room("Bedroom"));
    home->getRooms().push_back(new Room("ChildRoom"));

    // Kullan�c� ekleniyor
    User *user1 = new User("user1", 12345);
    User *user2 = new User("user2", 12345);
    admin->addUser(home, user1);
    admin->addUser(home, user2);

    // KidSpeaker ve Child cihazlar�n� test et
    Child *child1 = new Child("John", 12345);
    KidSpeaker *kidSpeaker1 = new KidSpeaker("Kid Speaker", 10, "Please stop crying!", child1);

    cout << "John starts crying..." << endl;
    child1->cry(); // �ocuk a�lamaya ba�l�yor
    kidSpeaker1->monitorChild(); // �ocu�u izlemeye ba�la

    cout << "John is being soothed..." << endl;
    child1->sootheChild(); // �ocuk sakinle�iyor

    if (!child1->getChildState()) {
        cout << "John is calm, stopping KidSpeaker." << endl;
        kidSpeaker1->stopRinging(); // �ocuk sakinle�ti, alarm durduruluyor
    }

    // TV, Thermostat, Fridge, Curtain cihazlar�n� test et
    TV tv1("Samsung TV", 5, 101);
    Thermostat thermostat1("Nest Thermostat", 2);
    Fridge fridge1("LG Fridge", 3);
    Curtain curtain1("Living Room Curtain", 1);

    tv1.open();
    thermostat1.open();
    fridge1.open();
    curtain1.open();

    tv1.setChannelTo(202);
    cout << "TV current channel: " << tv1.getCurrentChannel() << endl;

    Room room1("Living Room");
    thermostat1.heatRoom(room1);
    cout << "Room temperature: " << room1.getTemperature() << "�C" << endl;

    cout << "TV energy consumption: " << tv1.getEnergyConsumption() << " W" << endl;
    cout << "Thermostat energy consumption: " << thermostat1.getEnergyConsumption() << " W" << endl;
    cout << "Fridge energy consumption: " << fridge1.getEnergyConsumption() << " W" << endl;
    cout << "Curtain energy consumption: " << curtain1.getEnergyConsumption() << " W" << endl;

    tv1.close();
    thermostat1.close();
    fridge1.close();
    curtain1.close();

    // Light cihaz�n� test et
    Light livingRoomLight("Living Room Light", 1, "Normal", LightColor::White);
    cout << "Light device created: " << livingRoomLight.getName() << endl;
    cout << "Initial Light Color: " << static_cast<int>(livingRoomLight.getColor()) << endl;

    livingRoomLight.setColor(LightColor::Red);
    cout << "Updated Light Color: " << static_cast<int>(livingRoomLight.getColor()) << endl;

    livingRoomLight.setOperationType("Brightness Adjustment");
    cout << "Light Operation Type: " << livingRoomLight.getOperationType() << endl;

    // Oven cihaz�n� test et
    int dummyAttr = 0; // Placeholder attribute, uygun �ekilde de�i�tirilebilir
    Oven kitchenOven("Kitchen Oven", dummyAttr, "Cooking", OvenCookMode::Conventional);
    cout << "Oven device created: " << kitchenOven.getName() << endl;
    cout << "Initial Oven Mode: " << static_cast<int>(kitchenOven.getCookMode()) << endl;

    kitchenOven.setCookMode(OvenCookMode::Grill);
    cout << "Updated Oven Mode: " << static_cast<int>(kitchenOven.getCookMode()) << endl;

    kitchenOven.setOperationType("Grilling Mode");
    cout << "Oven Operation Type: " << kitchenOven.getOperationType() << endl;

    kitchenOven.display(); // F�r�n� ekrana yazd�rma

    // Temizlik
    delete child1;
    delete kidSpeaker1;
    delete user1;
    delete user2;
    delete admin;

    return 0;
}
