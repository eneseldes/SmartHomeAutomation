#include <iostream>
#include "DryingMachine.h"

DryingMachine::DryingMachine() {
	setMode(operationType);
	modes = { "Normal", "Delicate", "Baby", "Quick", "Synthetic", "AntiWrinkle" };
}

void DryingMachine::setMode(std::string  operationType) {
	for each (std::string mode in modes) {
		if (operationType == mode)
		{
			HasMode::setMode(operationType);

			if (operationType == "Normal")
			{
				setTimer(120);
			}
			else if (operationType == "Delicate") {
				setTimer(70);
			}
			else if (operationType == "Baby") {
				setTimer(80);
			}
			else if (operationType == "Quick") {
				setTimer(60);
			}
			else if (operationType == "Synthetic") {
				setTimer(100);
			}
			else if (operationType == "AntiWrinkle") {
				setTimer(160);
			}
			return;
		}
	}

	System::Windows::Forms::MessageBox::Show("Invalid Mode!");
}

std::string DryingMachine::getMode() const {
	return HasMode::getMode();
}

void DryingMachine::display() const {
	std::cout << "DryingMachine: " << getName() << " (Mode: "
		<< getMode() << ")" << std::endl
		<< "(Minute: " << deviceTimer << ")" << std::endl;
}

double DryingMachine::threadLevel() {
	return 0.6;
}

double DryingMachine::getEnergyConsumption() const {
	return 75.0;
}

void DryingMachine::reset() {
	HasMode::reset();
}