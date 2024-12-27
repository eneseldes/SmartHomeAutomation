#include "Child.h"

Child::Child(const std::string& nickname, const std::string&) : User(nickname, password) {}

void Child::cry() {
    isCrying = true;
    std::cout << nickname << " is crying." << std::endl;
}

void Child::sootheChild() {
    isCrying = false;
    std::cout << nickname << " is soothed." << std::endl;
}

bool Child::getChildState() {
    return isCrying;
}