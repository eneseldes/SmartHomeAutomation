#ifndef DEVICE_H
#define DEVICE_H

#include <string>
#include <iostream>

class Device {
protected:
    std::string deviceName;
    bool active;

public:
    Device();
    Device(std::string name);
    virtual ~Device() = default;

    void open();
    void close();
    virtual void display() const = 0;
    virtual double getEnergyConsumption() const = 0;
    virtual double threadLevel() = 0;

    std::string getName() const;
    bool isActive() const;
    void setName(const std::string& name);
    void setActive(bool active);

    bool operator==(Device& other);
};

#endif
