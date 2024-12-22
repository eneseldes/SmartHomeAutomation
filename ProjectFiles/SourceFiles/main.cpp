#include "Home.h"
#include "Admin.h"

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

    return 0;
}