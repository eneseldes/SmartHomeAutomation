#include "RobotVacuum.h"
#include <iostream>

RobotVacuum::RobotVacuum() {
	operationType = "Normal";
	modes = {"Normal", "Eco", "Wet"};
}

void RobotVacuum::setMode(std::string operationType) {
	for each (std::string mode in modes) {
		if (operationType == mode)
		{
			HasMode::setMode(operationType);

			if (operationType == "Normal")
			{
				setTimer(120);
			}
			else if (operationType == "Eco") {
				setTimer(100);
			}
			else if (operationType == "Wet") {
				setTimer(160);
			}
			return;
		}
	}

	System::Windows::Forms::MessageBox::Show("Invalid Mode!");
}


std::string RobotVacuum::getMode() const {
	return HasMode::getMode();
}

void RobotVacuum::selectRoom(const std::string& room) {
	selectedRooms.push_back(room);
	std::cout << "Room selected: " << room << std::endl;
}

void RobotVacuum::displaySelectedRooms() const {
	std::cout << "Selected rooms: " << std::endl;
	for (const auto& room : selectedRooms) {

		std::cout << room << std::endl;
	}
}


void RobotVacuum::display() const {

	std::cout << "Robot Vacuum: " << getName()
		<< " (Mode: " << getMode() << ")" << std::endl
		;
	displaySelectedRooms();
}

double RobotVacuum::threadLevel() {
	return 0.3;  // Örnek bir değer
}

double RobotVacuum::getEnergyConsumption() const {
	return 50.0;  // Örnek bir değer
}
