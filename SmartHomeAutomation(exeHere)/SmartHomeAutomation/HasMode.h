#ifndef HASMODE_H
#define HASMODE_H
#include <vector>

#include "Device.h"

class HasMode : public Device
{
protected:
    std::string operationType;
    int deviceTimer;
    std::vector<std::string> modes;
    bool working = false;

public:
    HasMode();
    virtual void setMode(std::string mode) = 0;
    virtual std::string getMode() const = 0;
    void setWorking(bool running);
    bool isWorking();
    virtual void reset() = 0;

    void setTimer(int timer);
    int getTimer();
    void stopTimer();

    std::vector<std::string> getModes();
};

#endif
