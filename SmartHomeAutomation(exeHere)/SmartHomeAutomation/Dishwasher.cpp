#include "Dishwasher.h"

Dishwasher::Dishwasher()
{
	deviceName = "Dishwasher";
	HasMode::setMode("Normal");
	modes = { "Normal", "Eco", "Intensive", "Quick", "RinseOnly" };
}

void Dishwasher::setMode(std::string operationType) {
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
			else if (operationType == "Intensive") {
				setTimer(160);
			}
			else if (operationType == "Quick") {
				setTimer(60);
			}
			else if (operationType == "RinseOnly") {
				setTimer(40);
			}
			return;
		}
	}

	System::Windows::Forms::MessageBox::Show("Invalid Mode!");
}

std::string Dishwasher::getMode() const {
	return HasMode::getMode();
}

void Dishwasher::display() const {
	std::cout << "Dishwasher: " << getName() << " (Mode: "
		<< getMode() << ")" << std::endl

		<< "(Minute: " << deviceTimer << ")" << std::endl;
}

double Dishwasher::threadLevel() {
	return 0.5;
}

double Dishwasher::getEnergyConsumption() const {
	return 70.0;
}

void Dishwasher::reset() {
	HasMode::reset();
}