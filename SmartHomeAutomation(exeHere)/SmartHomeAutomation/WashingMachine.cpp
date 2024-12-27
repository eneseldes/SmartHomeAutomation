#include "WashingMachine.h"

WashingMachine::WashingMachine()
{
    deviceName = "Washer";
    operationType = "Normal";
    temperature = 0;
    modes = {"Normal", "Sensitive", "Heavy Duty", "Quick", "Cold Wash"};
}

void WashingMachine::setMode(std::string operationType)
{
    for each (std::string mode in modes) {
        if (operationType == mode)
        {
            HasMode::setMode(operationType);

            if (operationType == "Normal")
            {
                setTimer(60);
                temperature = 40;
            }
            else if (operationType == "Sensitive")
            {
                cycleValue = 400;
                setTimer(50);
                temperature = 30;
            }
            else if (operationType == "Heavy Duty")
            {
                cycleValue = 1200;
                setTimer(120);
                temperature = 60;
            }
            else if (operationType == "Quick")
            {
                cycleValue = 600;
                setTimer(15);
                temperature = 30;
            }
            else if (operationType == "Cold Wash")
            {
                setTimer(80);
                temperature = 20;
            }
            return;
        }
    }

    System::Windows::Forms::MessageBox::Show("Invalid Mode!");
}

std::string WashingMachine::getMode() const
{
    return HasMode::getMode();
}

void WashingMachine::setCycleValue(int val)
{
    this->cycleValue = val;
}

int WashingMachine::getCycleValue() const
{
    return cycleValue;
}

void WashingMachine::setTemperature(int temperature) {
    this->temperature = temperature;
}

int WashingMachine::getTemperature() {
    return temperature;
}

void WashingMachine::display() const
{
    std::cout << "Washing Machine: " << getName()<< std::endl

              << "(Mode: " << getMode() << ")" << std::endl
              << "(Cycle: " << getCycleValue() << ")" << std::endl
              << "(Minute: " << deviceTimer << ")" << std::endl;
}

double WashingMachine::threadLevel()
{
    return 0.8;
}

double WashingMachine::getEnergyConsumption() const
{
    return 90.0;
}

void WashingMachine::reset() {
    HasMode::reset();
    temperature = 0;
    cycleValue = 0;
}