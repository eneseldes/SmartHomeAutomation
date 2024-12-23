#include <iostream>
#include "TV.h"
#include "Thermostat.h"
#include "Fridge.h"
#include "Curtain.h"
#include "Room.h"

#include "Home.h"
#include "Admin.h"

using namespace std;
    
// Compile için:
// 1- mingw32-make
// 2- .\main
    
Home *home = new Home();
    
int main()
{   
    // Initialize kısmı şimdilik böyle kalsın ilerde direkt home'un constructoruna atabiliriz.
    // Admin
    Admin *admin = new Admin("admin", 12345);
    admin->addUser(home, new User("admin", 12345));
    
    // Adding Rooms to home
    home->getRooms().push_back(new Room("Kitchen"));
    home->getRooms().push_back(new Room("LivingRoom"));
    home->getRooms().push_back(new Room("Bathroom"));
    home->getRooms().push_back(new Room("Bedroom"));
    home->getRooms().push_back(new Room("ChildRoom"));

    // User test
    User* user1 = new User("user1", 12345);
    User* user2 = new User("user2", 12345);
    User* user3 = new User("user2", 12345);

    admin->addUser(home, user1);
    admin->addUser(home, user2);
    admin->addUser(home, user3);

    admin->removeUser(home, user3);
    admin->removeUser(home, user3);
    
    TV tv1("Samsung TV", 5, 101);
	Thermostat thermostat1("Nest Thermostat", 2);
	Fridge fridge1("LG Fridge", 3);
	Curtain curtain1("Living Room Curtain", 1);


	cout << "Device: " << tv1.getName() << " | Attribute: " << tv1.getAttribute() << endl;
	cout << "Device: " << thermostat1.getName() << " | Attribute: " << thermostat1.getAttribute() << endl;
	cout << "Device: " << fridge1.getName() << " | Attribute: " << fridge1.getAttribute() << endl;
	cout << "Device: " << curtain1.getName() << " | Attribute: " << curtain1.getAttribute() << endl;


	tv1.open();
	thermostat1.open();
	fridge1.open();
	curtain1.open();

	tv1.setChannelTo(202);
	cout << "TV current channel: " << tv1.getCurrentChannel() << endl;

	Room room1("Living Room");
	thermostat1.heatRoom(room1);
	cout << "Room temperature: " << room1.getTemperature() << "B0C" << endl;

	tv1.stopTimer();
	thermostat1.stopTimer();

	cout << "TV energy consumption: " << tv1.getEnergyConsumption() << " W" << endl;
	cout << "Thermostat energy consumption: " << thermostat1.getEnergyConsumption() << " W" << endl;
	cout << "Fridge energy consumption: " << fridge1.getEnergyConsumption() << " W" << endl;
	cout << "Curtain energy consumption: " << curtain1.getEnergyConsumption() << " W" << endl;

	cout << "TV thread level: " << tv1.threadLevel() << endl;
	cout << "Thermostat thread level: " << thermostat1.threadLevel() << endl;
	cout << "Fridge thread level: " << fridge1.threadLevel() << endl;
	cout << "Curtain thread level: " << curtain1.threadLevel() << endl;

	tv1.close();
	thermostat1.close();
	fridge1.close();
	curtain1.close();

	return 0;
}