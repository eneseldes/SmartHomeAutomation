#include "HasMode.h"

HasMode::HasMode()
    : operationType("Normal"), deviceTimer(0) { }

void HasMode::setMode(std::string oprType)
{
    HasMode::operationType = oprType;
}

std::string HasMode::getMode() const
{
    return operationType;
}

void HasMode::setWorking(bool working) {
    this->working = working;
}

bool HasMode::isWorking() {
    return working;
}

void HasMode::setTimer(int timer)
{
    deviceTimer = timer;
}

int HasMode::getTimer() {
    return deviceTimer;
}

void HasMode::stopTimer()
{
    deviceTimer = 0;
}

std::vector<std::string> HasMode::getModes() {
    return modes;
}

void HasMode::reset() {
    operationType = "Standby";
    stopTimer();
}