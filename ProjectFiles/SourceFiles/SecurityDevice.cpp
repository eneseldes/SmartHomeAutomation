#include "SecurityDevice.h"

#include <iostream>

SecurityDevice::SecurityDevice(const std::string& name, const SecurityAlarm& alarm): Device(name), alarm(alarm) {}
