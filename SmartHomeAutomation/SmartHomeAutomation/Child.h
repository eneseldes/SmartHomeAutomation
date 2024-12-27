#ifndef CHILD_H
#define CHILD_H

#include "User.h"

// Main aim of this class is to test Devices

class Child : public User {
private:
    bool isCrying;

public:
    Child(const std::string& nickname, const std::string& password);
    void cry();
    void sootheChild();

    bool getChildState();
};

#endif