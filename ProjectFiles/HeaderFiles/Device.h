#ifndef DEVICE_H
#define DEVICE_H

#include <iostream>

class Device {
protected:
    std::string name;
    bool active;

public:
    Device(const std::string& name);
    virtual ~Device() = default;

    void open();
    void close();
    void display() const;
    virtual double threadLevel() const;

    std::string getName() const;
    bool isActive();
    void setName(const std::string& name);
    void setActive(bool active);

    bool operator==(Device &other);
};

#endif