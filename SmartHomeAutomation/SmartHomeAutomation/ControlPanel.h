#pragma once
#include "User.h"
#include "Home.h"
#include "SettableDevice.h"
#include <msclr/marshal_cppstd.h>
#include "Light.h"
#include "WashingMachine.h"
#include "Oven.h"
#include "Settings.h"
#include "SecurityCamera.h"

namespace SmartHomeAutomation {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for ControlPanel
	/// </summary>
	public ref class ControlPanel : public System::Windows::Forms::Form
	{
	private:
		Home* home;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::FlowLayoutPanel^ flowLayoutPanel1;

		   User* currentUser;
		   System::Collections::Generic::List<Panel^>^ devicePanels;
		   System::Collections::Generic::List<TrackBar^>^ deviceBars;
		   System::Collections::Generic::List<Label^>^ deviceLabels;
		   System::Collections::Generic::List<Button^>^ deviceSwitchButtons;
	private: System::Windows::Forms::Panel^ panel1;
		   System::Collections::Generic::List<ComboBox^>^ deviceComboBoxes;

	public:
		ControlPanel(User* user)
		{
			InitializeComponent();
			currentUser = user;
			devicePanels = gcnew System::Collections::Generic::List<Panel^>();
			deviceBars = gcnew System::Collections::Generic::List<TrackBar^>();
			deviceLabels = gcnew System::Collections::Generic::List<Label^>();
			deviceSwitchButtons = gcnew System::Collections::Generic::List<Button^>();
			deviceComboBoxes = gcnew System::Collections::Generic::List<ComboBox^>();
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~ControlPanel()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	protected:
	private: System::Windows::Forms::Label^ txtUserName;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Button^ btnKitchen;
	private: System::Windows::Forms::Button^ btnLivingRoom;
	private: System::Windows::Forms::Button^ btnBathroom;
	private: System::Windows::Forms::Button^ btnBedroom;
	private: System::Windows::Forms::Button^ btnChildrenRoom;
	private: System::Windows::Forms::Button^ btnSettings;

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->txtUserName = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->btnKitchen = (gcnew System::Windows::Forms::Button());
			this->btnLivingRoom = (gcnew System::Windows::Forms::Button());
			this->btnBathroom = (gcnew System::Windows::Forms::Button());
			this->btnBedroom = (gcnew System::Windows::Forms::Button());
			this->btnChildrenRoom = (gcnew System::Windows::Forms::Button());
			this->btnSettings = (gcnew System::Windows::Forms::Button());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->flowLayoutPanel1 = (gcnew System::Windows::Forms::FlowLayoutPanel());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->panel1->SuspendLayout();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(162)));
			this->label1->Location = System::Drawing::Point(33, 27);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(129, 29);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Welcome,";
			// 
			// txtUserName
			// 
			this->txtUserName->AutoSize = true;
			this->txtUserName->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(162)));
			this->txtUserName->Location = System::Drawing::Point(158, 28);
			this->txtUserName->Name = L"txtUserName";
			this->txtUserName->Size = System::Drawing::Size(82, 29);
			this->txtUserName->TabIndex = 1;
			this->txtUserName->Text = L"Name";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(162)));
			this->label2->Location = System::Drawing::Point(32, 90);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(102, 29);
			this->label2->TabIndex = 2;
			this->label2->Text = L"Rooms:";
			// 
			// btnKitchen
			// 
			this->btnKitchen->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(162)));
			this->btnKitchen->Location = System::Drawing::Point(83, 133);
			this->btnKitchen->Name = L"btnKitchen";
			this->btnKitchen->Size = System::Drawing::Size(136, 42);
			this->btnKitchen->TabIndex = 3;
			this->btnKitchen->Text = L"Kitchen";
			this->btnKitchen->UseVisualStyleBackColor = true;
			this->btnKitchen->Click += gcnew System::EventHandler(this, &ControlPanel::OnRoomButtonClick);
			// 
			// btnLivingRoom
			// 
			this->btnLivingRoom->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(162)));
			this->btnLivingRoom->Location = System::Drawing::Point(225, 133);
			this->btnLivingRoom->Name = L"btnLivingRoom";
			this->btnLivingRoom->Size = System::Drawing::Size(136, 42);
			this->btnLivingRoom->TabIndex = 4;
			this->btnLivingRoom->Text = L"LivingRoom";
			this->btnLivingRoom->UseVisualStyleBackColor = true;
			this->btnLivingRoom->Click += gcnew System::EventHandler(this, &ControlPanel::OnRoomButtonClick);
			// 
			// btnBathroom
			// 
			this->btnBathroom->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(162)));
			this->btnBathroom->Location = System::Drawing::Point(367, 133);
			this->btnBathroom->Name = L"btnBathroom";
			this->btnBathroom->Size = System::Drawing::Size(136, 42);
			this->btnBathroom->TabIndex = 5;
			this->btnBathroom->Text = L"Bathroom";
			this->btnBathroom->UseVisualStyleBackColor = true;
			this->btnBathroom->Click += gcnew System::EventHandler(this, &ControlPanel::OnRoomButtonClick);
			// 
			// btnBedroom
			// 
			this->btnBedroom->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(162)));
			this->btnBedroom->Location = System::Drawing::Point(153, 181);
			this->btnBedroom->Name = L"btnBedroom";
			this->btnBedroom->Size = System::Drawing::Size(136, 42);
			this->btnBedroom->TabIndex = 6;
			this->btnBedroom->Text = L"Bedroom";
			this->btnBedroom->UseVisualStyleBackColor = true;
			this->btnBedroom->Click += gcnew System::EventHandler(this, &ControlPanel::OnRoomButtonClick);
			// 
			// btnChildrenRoom
			// 
			this->btnChildrenRoom->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(162)));
			this->btnChildrenRoom->Location = System::Drawing::Point(295, 181);
			this->btnChildrenRoom->Name = L"btnChildrenRoom";
			this->btnChildrenRoom->Size = System::Drawing::Size(136, 42);
			this->btnChildrenRoom->TabIndex = 7;
			this->btnChildrenRoom->Text = L"ChildrenRoom";
			this->btnChildrenRoom->UseVisualStyleBackColor = true;
			this->btnChildrenRoom->Click += gcnew System::EventHandler(this, &ControlPanel::OnRoomButtonClick);
			// 
			// btnSettings
			// 
			this->btnSettings->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(162)));
			this->btnSettings->Location = System::Drawing::Point(445, 15);
			this->btnSettings->Name = L"btnSettings";
			this->btnSettings->Size = System::Drawing::Size(94, 52);
			this->btnSettings->TabIndex = 8;
			this->btnSettings->Text = L"Settings";
			this->btnSettings->UseVisualStyleBackColor = true;
			this->btnSettings->Click += gcnew System::EventHandler(this, &ControlPanel::btnSettings_Click);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(162)));
			this->label3->Location = System::Drawing::Point(32, 239);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(113, 29);
			this->label3->TabIndex = 9;
			this->label3->Text = L"Devices:";
			// 
			// flowLayoutPanel1
			// 
			this->flowLayoutPanel1->AutoScroll = true;
			this->flowLayoutPanel1->Location = System::Drawing::Point(37, 275);
			this->flowLayoutPanel1->Name = L"flowLayoutPanel1";
			this->flowLayoutPanel1->Size = System::Drawing::Size(503, 378);
			this->flowLayoutPanel1->TabIndex = 10;
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->panel1->Controls->Add(this->btnSettings);
			this->panel1->Controls->Add(this->label1);
			this->panel1->Controls->Add(this->txtUserName);
			this->panel1->Location = System::Drawing::Point(-1, -1);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(560, 82);
			this->panel1->TabIndex = 11;
			// 
			// ControlPanel
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 18);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::GradientActiveCaption;
			this->ClientSize = System::Drawing::Size(555, 668);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->flowLayoutPanel1);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->btnChildrenRoom);
			this->Controls->Add(this->btnBedroom);
			this->Controls->Add(this->btnBathroom);
			this->Controls->Add(this->btnLivingRoom);
			this->Controls->Add(this->btnKitchen);
			this->Controls->Add(this->label2);
			this->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(162)));
			this->Name = L"ControlPanel";
			this->Text = L"MyHome";
			this->Load += gcnew System::EventHandler(this, &ControlPanel::ControlPanel_Load);
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private:
		System::Void ControlPanel_Load(System::Object^ sender, System::EventArgs^ e) {
			//Initialize home
			home = Home::getInstance();
			txtUserName->Text = gcnew String(currentUser->getNickname().c_str());
		}

		/*
			All the rooms buttons are connected to this event. 
			It gets the Text value of the button and call UpdateUIForRoom
			with that Text value.
		*/
		System::Void OnRoomButtonClick(Object^ sender, EventArgs^ e) {
			Button^ clickedButton = (Button^)sender;
			System::String^ roomName = clickedButton->Text;
			Room* selectedRoom = nullptr;

			// Find the room which name is the same with the button text
			for each (Room * room in home->getRooms())
			{
				System::String^ itRoomName = gcnew String(room->getName().c_str());

				if (itRoomName == roomName)
					selectedRoom = room;
			}

			UpdateUIForRoom(selectedRoom);
		}

		/*
			Loads the devices of the 'room' into UI.
			The inner design is adjusted whether device type is
			settable, security, or HasMode device
		*/
		System::Void UpdateUIForRoom(Room* room) {
			ClearRoomUI();

			// Get devices and name of the 'room'
			std::vector<Device*> devices = room->getDevices();
			System::String^ roomName = gcnew String(room->getName().c_str());

			// Fill the UI with devices of the 'room'
			int yPos = 8;
			for (size_t i = 0; i < devices.size(); i++) {
				Device* device = devices[i];
				System::String^ deviceName = gcnew String(device->getName().c_str());

				// White panel for container
				Panel^ devicePanel = gcnew Panel();
				devicePanel->Size = System::Drawing::Size(222, 212);
				devicePanel->BackColor = System::Drawing::Color::White;
				devicePanel->Margin = System::Windows::Forms::Padding(10);
				devicePanels->Add(devicePanel);

				// Horizantol line for aesthetic
				Panel^ horizontalLine = gcnew Panel();
				horizontalLine->Size = System::Drawing::Size(222, 3);
				horizontalLine->Location = System::Drawing::Point(0, yPos + 60);
				horizontalLine->BackColor = System::Drawing::Color::SteelBlue;
				horizontalLine->Margin = System::Windows::Forms::Padding(10);
				devicePanel->Controls->Add(horizontalLine);

				// Label which holds the device name
				Label^ deviceLabel = gcnew Label();
				deviceLabel->Text = deviceName;
				deviceLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
					static_cast<System::Byte>(162)));
				deviceLabel->Size = System::Drawing::Size(129, 29);
				deviceLabel->AutoSize = true;
				deviceLabel->Location = System::Drawing::Point(8, yPos + 15);
				devicePanel->Controls->Add(deviceLabel);
				deviceLabels->Add(deviceLabel);

				// Device turn on/off button
				Button^ switchButton = gcnew Button();
				switchButton->Text = device->isActive() ? "On" : "Off";
				switchButton->Location = System::Drawing::Point(126, yPos);
				switchButton->Size = System::Drawing::Size(88, 55);
				// Set EventHandler
				switchButton->Click += gcnew EventHandler(this, &ControlPanel::OnDeviceSwitchButtonClick);
				// Assign tag to indicate which device is this button belongs to.
				switchButton->Tag = roomName + " " + deviceName + " " + "switch";
				// Add new button to buttons array
				deviceSwitchButtons->Add(switchButton);
				devicePanel->Controls->Add(switchButton);

				// Design for SettableDevice objects
				if (dynamic_cast<SettableDevice*>(device))
				{
					SettableDevice* settableDevice = (SettableDevice*)device;
					System::String^ trackBarLabelText = gcnew String(settableDevice->getAttributeName().c_str());

					// Add label to represent attribute type
					Label^ trackBarLabel = gcnew Label();
					trackBarLabel->Text = trackBarLabelText + ":";
					trackBarLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.0F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
						static_cast<System::Byte>(162)));
					trackBarLabel->AutoSize = true;
					trackBarLabel->Location = System::Drawing::Point(10, yPos + 120);
					devicePanel->Controls->Add(trackBarLabel);

					// Hold the label Text to change it later according to SettableDevice type
					Label^ trackBarValueLabel = gcnew Label();
					trackBarValueLabel->Text = settableDevice->getAttribute().ToString();
					trackBarValueLabel->Tag = roomName + " " + deviceName;
					trackBarValueLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.0F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
						static_cast<System::Byte>(162)));
					trackBarValueLabel->AutoSize = true;
					trackBarValueLabel->Location = System::Drawing::Point(89, yPos + 120);
					devicePanel->Controls->Add(trackBarValueLabel);
					deviceLabels->Add(trackBarValueLabel);

					// Add trackbar to change attribute of the SettableDevice
					TrackBar^ deviceBar = gcnew TrackBar();
					// Set min and max bounds with the values from the device
					deviceBar->Minimum = settableDevice->getLowerBound();
					deviceBar->Maximum = settableDevice->getUpperBound();
					deviceBar->Value = settableDevice->getAttribute();
					deviceBar->Location = System::Drawing::Point(110, yPos + 117);
					devicePanel->Controls->Add(deviceBar);
					deviceBar->Enabled = device->isActive();
					// Set tag to reach this later
					deviceBar->Tag = roomName + " " + deviceName;
					// Add eventhandler
					deviceBar->Scroll += gcnew EventHandler(this, &ControlPanel::OnTrackBarScroll);
					deviceBars->Add(deviceBar);
				}

				// Design for HasMode objects
				if (dynamic_cast<HasMode*>(device))
				{
					HasMode* deviceHasMode = (HasMode*)device;

					// Add label to represent mode
					Label^ modeLabel = gcnew Label();
					modeLabel->Text = "Mode:";
					modeLabel->AutoSize = true;
					modeLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.0F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
						static_cast<System::Byte>(162)));
					modeLabel->Location = System::Drawing::Point(9, yPos + 83);
					devicePanel->Controls->Add(modeLabel);

					// Create combobox to select and show working modes of the device
					ComboBox^ comboBox = gcnew ComboBox();
					comboBox->Width = 154;
					comboBox->Location = System::Drawing::Point(60, yPos + 78);

					// Add working modes to combobox
					comboBox->Items->Add("Standby");
					for each (std::string mode in deviceHasMode->getModes())
					{
						System::String^ strMode = gcnew System::String(mode.c_str());
						comboBox->Items->Add(strMode);
					}

					comboBox->SelectedIndex = 0;
					// Set enabled if device is active and not working
					comboBox->Enabled = deviceHasMode->isActive() && !deviceHasMode->isWorking();
					// Set tag to reach later
					comboBox->Tag = roomName + " " + deviceName;
					// Add eventhandler
					comboBox->SelectedIndexChanged += gcnew System::EventHandler(this, &ControlPanel::comboBoxSelectedIndexChanged);
					devicePanel->Controls->Add(comboBox);
					deviceComboBoxes->Add(comboBox);

					// Timer label
					Label^ timerLabel = gcnew Label();
					timerLabel->Text = "For:";
					timerLabel->AutoSize = true;
					timerLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.0F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
						static_cast<System::Byte>(162)));
					timerLabel->Location = System::Drawing::Point(9, yPos + 161);
					devicePanel->Controls->Add(timerLabel);

					// Timer Value label
					Label^ timerValueLabel = gcnew Label();
					timerValueLabel->Text = "0";
					timerValueLabel->AutoSize = true;
					timerValueLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.0F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
						static_cast<System::Byte>(162)));
					timerValueLabel->Tag = roomName + " " + deviceName + " " + "wtimer";
					timerValueLabel->Location = System::Drawing::Point(40, yPos + 161);
					deviceLabels->Add(timerValueLabel);
					devicePanel->Controls->Add(timerValueLabel);

					// Set device button
					Button^ setDeviceButton = gcnew Button();
					setDeviceButton->Text = deviceHasMode->isWorking() ? "Stop" : "Set";
					setDeviceButton->Enabled = device->isActive();
					setDeviceButton->Size = System::Drawing::Size(98, 81);
					setDeviceButton->Location = System::Drawing::Point(116, yPos + 110);
					setDeviceButton->Click += gcnew EventHandler(this, &ControlPanel::OnDeviceSwitchButtonClick);
					setDeviceButton->Tag = roomName + " " + deviceName + " " + "set";
					devicePanel->Controls->Add(setDeviceButton);
					deviceSwitchButtons->Add(setDeviceButton);

					// Design for WashingMachine
					if (dynamic_cast<WashingMachine*>(deviceHasMode))
					{
						WashingMachine* washer = (WashingMachine*)deviceHasMode;

						// Temperature label
						Label^ washerTempLabel = gcnew Label();
						washerTempLabel->Text = "Temp:";
						washerTempLabel->AutoSize = true;
						washerTempLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.0F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
							static_cast<System::Byte>(162)));
						washerTempLabel->Location = System::Drawing::Point(9, yPos + 119);
						devicePanel->Controls->Add(washerTempLabel);

						// Temperature Value label
						Label^ washerTempValueLabel = gcnew Label();
						washerTempValueLabel->Text = washer->getTemperature() + "°C";
						washerTempValueLabel->AutoSize = true;
						washerTempValueLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.0F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
							static_cast<System::Byte>(162)));
						washerTempValueLabel->Location = System::Drawing::Point(56, yPos + 119);
						washerTempValueLabel->Tag = roomName + " " + deviceName + " " + "wtemp";
						deviceLabels->Add(washerTempValueLabel);
						devicePanel->Controls->Add(washerTempValueLabel);

						// Cycle label
						Label^ washerCycleLabel = gcnew Label();
						washerCycleLabel->Text = "Cycle:";
						washerCycleLabel->AutoSize = true;
						washerCycleLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.0F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
							static_cast<System::Byte>(162)));
						washerCycleLabel->Location = System::Drawing::Point(9, yPos + 138);
						devicePanel->Controls->Add(washerCycleLabel);

						// Cycle value label
						Label^ washerCycleValueLabel = gcnew Label();
						washerCycleValueLabel->Text = washer->getCycleValue().ToString();
						washerCycleValueLabel->AutoSize = true;
						washerCycleValueLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.0F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
							static_cast<System::Byte>(162)));
						washerCycleValueLabel->Location = System::Drawing::Point(56, yPos + 138);
						washerCycleLabel->Tag = roomName + " " + deviceName + " " + "wcycle";
						deviceLabels->Add(washerCycleValueLabel);
						devicePanel->Controls->Add(washerCycleValueLabel);
					}
				}

				if (dynamic_cast<SecurityCamera*>(device))
				{
					Button^ look = gcnew Button();
					look->Text = "Look";
					look->Enabled = device->isActive();
					look->Location = System::Drawing::Point(80, yPos + 120);
					look->Size = System::Drawing::Size(88, 55);
					look->Click += gcnew EventHandler(this, &ControlPanel::OnLook);
					look->Tag = roomName + " " + "look";
					deviceSwitchButtons->Add(look);
					devicePanel->Controls->Add(look);
				}

				// Add the white container into flowLayoutPanel
				flowLayoutPanel1->Controls->Add(devicePanel);
			}
		}

		// Set the properties of the HasMode device in UI when combobox is selected
		System::Void comboBoxSelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
			ComboBox^ clickedComboBox = (ComboBox^)sender;
			std::string stdComboBoxText = msclr::interop::marshal_as<std::string>(clickedComboBox->SelectedItem->ToString());
			
			if (stdComboBoxText == "Standby")
				return;

			// Get the comboboxTag as string
			System::String^ comboBoxTag = (System::String^)clickedComboBox->Tag;
			// Get the room and device name from the tag and assign it as std::string
			System::String^ roomName = comboBoxTag->Split(' ')[0];
			System::String^ deviceName = comboBoxTag->Split(' ')[1];
			std::string stdRoomName = msclr::interop::marshal_as<std::string>(roomName);
			std::string stdDeviceName = msclr::interop::marshal_as<std::string>(deviceName);
			
			HasMode* device = nullptr;
			Label^ tempLabel = gcnew Label();
			Label^ cycleLabel = gcnew Label();
			Label^ timerLabel = gcnew Label();

			// Find the device which will be affected by this event
			for each (Room * room in home->getRooms())
				if (stdRoomName == room->getName())
					for each (HasMode * itDevice in room->getDevices())
						if (stdDeviceName == itDevice->getName())
							device = itDevice;

			// Get and set the labels for WashingMachine
			for each (Label ^ itLabel in deviceLabels) {
				if (itLabel->Tag == nullptr)
					continue;

				System::String^ labelTag = (System::String^)itLabel->Tag;

				if (labelTag->Split(' ')[0] == roomName) {
					if (labelTag->Split(' ')[1] == deviceName)
						if (labelTag->Split(' ')[2] == "wtemp")
							tempLabel = itLabel;
						else if (labelTag->Split(' ')[2] == "wcycle")
							cycleLabel = itLabel;
						else if (labelTag->Split(' ')[2] == "wtimer")
							timerLabel = itLabel;
				}
			}

			// Temporarily set the mode to assign values of the mode to the labels
			device->setMode(stdComboBoxText);
			timerLabel->Text = gcnew String(device->getTimer().ToString());

			if (dynamic_cast<WashingMachine*>(device))
			{
				WashingMachine* washer = (WashingMachine*)device;
				tempLabel->Text = gcnew String(washer->getTemperature().ToString() + "°C");
				cycleLabel->Text = gcnew String(washer->getCycleValue().ToString());
			}

			// Set to normal again
			device->setMode("Normal");
		}

		// Clear the devices every time when a button is clicked
		System::Void ClearRoomUI() {
			if (deviceBars->Count == 0)
				return;

			for each (Panel ^ devicePanel in devicePanels)
				devicePanel->Controls->Clear();

			flowLayoutPanel1->Controls->Clear();

			// Clear the arrays
			devicePanels->Clear();
			deviceBars->Clear();
			deviceLabels->Clear();
			deviceSwitchButtons->Clear();
			deviceComboBoxes->Clear();
		}
		System::Void OnLook(Object^ sender, EventArgs^ e) {
			Button^ clickedButton = (Button^)sender;

			// Get room and device name from the tag of the button
			System::String^ buttonTag = (System::String^)clickedButton->Tag;
			System::String^ roomName = buttonTag->Split(' ')[0];
			System::String^ deviceName = buttonTag->Split(' ')[1];
			std::string stdRoomName = msclr::interop::marshal_as<std::string>(roomName);
			std::string stdDeviceName = msclr::interop::marshal_as<std::string>(deviceName);

			SecurityCamera* device;

			// Find the device which will be affected from this event
			for each (Room * room in home->getRooms())
				if (stdRoomName == room->getName())
					for each (Device * itDevice in room->getDevices())
						if (stdDeviceName == itDevice->getName())
							device->detect(room);

			
		}

		// Device on/off and set HasMode is implemented here
		System::Void OnDeviceSwitchButtonClick(Object^ sender, EventArgs^ e) {
			Button^ clickedButton = (Button^)sender;

			// Get room and device name from the tag of the button
			System::String^ buttonTag = (System::String^)clickedButton->Tag;
			System::String^ roomName = buttonTag->Split(' ')[0];
			System::String^ deviceName = buttonTag->Split(' ')[1];
			std::string stdRoomName = msclr::interop::marshal_as<std::string>(roomName);
			std::string stdDeviceName = msclr::interop::marshal_as<std::string>(deviceName);

			Device* device;
			TrackBar^ trackBar;
			ComboBox^ comboBox;
			Button^ deviceSetButton;
			Button^ cameraButton;

			// Find the device which will be affected from this event
			for each (Room * room in home->getRooms())
				if (stdRoomName == room->getName())
					for each (Device * itDevice in room->getDevices())
						if (stdDeviceName == itDevice->getName())
							device = itDevice;

			// Get track bar element of the device
			for each (TrackBar ^ itTrackBar in deviceBars) {
				System::String^ trackBarTag = (System::String^)itTrackBar->Tag;

				if (trackBarTag->Split(' ')[0] == roomName && trackBarTag->Split(' ')[1] == deviceName)
					trackBar = itTrackBar;
			}

			// Get combobox element of the device 
			for each (ComboBox ^ itComboBox in deviceComboBoxes)
			{
				System::String^ comboBoxTag = (System::String^)itComboBox->Tag;

				if (comboBoxTag->Split(' ')[0] == roomName && comboBoxTag->Split(' ')[1] == deviceName)
					comboBox = itComboBox;
			}

			// Get the set button if on/off button is clicked
			for each (Button ^ itDeviceSetButton in deviceSwitchButtons)
			{
				System::String^ itDeviceSetButtonTag = (System::String^)itDeviceSetButton->Tag;

				if (itDeviceSetButtonTag->Split(' ')[0] == roomName
					&& itDeviceSetButtonTag->Split(' ')[1] == deviceName
					&& itDeviceSetButtonTag->Split(' ')[2] == "set") {
					deviceSetButton = itDeviceSetButton;
				}

				if (itDeviceSetButtonTag->Split(' ')[0] == roomName
					&& itDeviceSetButtonTag->Split(' ')[1] == "look") {
					cameraButton = itDeviceSetButton;
				}
			}

			// Implementations if the on/off button is clicked
			if (buttonTag->Split(' ')[2] == "switch")
			{
				// Set activeness and button enable
				if (device->isActive()) {
					device->setActive(false);
					clickedButton->Text = "Off";
					cameraButton->Enabled = false;
					if (dynamic_cast<SettableDevice*>(device))
						trackBar->Enabled = false;

					// Reset the values if device is HasMode
					if (dynamic_cast<HasMode*>(device))
					{
						deviceSetButton->Enabled = false;
						deviceSetButton->Text = "Set";
						comboBox->Enabled = false;
						((HasMode*)device)->reset();
					}
				}
				else {
					device->setActive(true);
					clickedButton->Text = "On";
					cameraButton->Enabled = true;
					if (dynamic_cast<SettableDevice*>(device))
						trackBar->Enabled = true;
					if (dynamic_cast<HasMode*>(device))
					{
						deviceSetButton->Enabled = true;
						deviceSetButton->Text = "Set";
						comboBox->Enabled = true;
					}
				}
			}
			// Implementations if the set button is clicked
			else if (buttonTag->Split(' ')[2] == "set") {
				HasMode* hasModeDevice = (HasMode*)device;

				// If it is working, stop
				if (hasModeDevice->isWorking())
				{
					hasModeDevice->setWorking(false);
					hasModeDevice->setMode("Normal");
					clickedButton->Text = "Set";
					comboBox->Enabled = true;
				}
				// Set item
				else
				{
					std::string comboBoxValue = msclr::interop::marshal_as<std::string>(comboBox->Text);

					if (comboBoxValue == "Standby")
					{
						MessageBox::Show("Enter a valid mode!");
					}
					else
					{
						hasModeDevice->setWorking(true);
						clickedButton->Text = "Stop";
						comboBox->Enabled = false;

						hasModeDevice->setMode(comboBoxValue);
					}
				}
			}
		}

		System::Void OnTrackBarScroll(System::Object^ sender, System::EventArgs^ e) {
			// Olayý tetikleyen TrackBar'ý alýn
			TrackBar^ trackBar = dynamic_cast<TrackBar^>(sender);

			// Butonun Tag özelliðinden ilgili cihazý al
			System::String^ device = (System::String^)trackBar->Tag;
			System::String^ roomName = device->Split(' ')[0];
			System::String^ deviceName = device->Split(' ')[1];
			std::string stdRoomName = msclr::interop::marshal_as<std::string>(roomName);
			std::string stdDeviceName = msclr::interop::marshal_as<std::string>(deviceName);

			SettableDevice* settableDevice = nullptr;
			Label^ trackBarValueLabel;

			for each (Room * room in home->getRooms())
				if (stdRoomName == room->getName())
					for each (Device * device in room->getDevices())
						if (stdDeviceName == device->getName())
							settableDevice = dynamic_cast<SettableDevice*>(device);

			for each (Label ^ label in deviceLabels)
			{
				if (label->Tag == nullptr)
					continue;

				System::String^ strLabel = (System::String^)label->Tag;

				if (strLabel->Length == 0)
				{
					continue;
				}

				if (strLabel->Split(' ')[0] == roomName && strLabel->Split(' ')[1] == deviceName)
					trackBarValueLabel = label;
			}

			if (settableDevice != nullptr) {
				// TrackBar'ýn mevcut deðerini cihazýn attribute'una eþitle
				settableDevice->setAttribute(trackBar->Value);
				trackBarValueLabel->Text = settableDevice->getAttribute().ToString();
			}
		}

		System::Void btnSettings_Click(System::Object^ sender, System::EventArgs^ e) {
			Settings^ s = gcnew Settings(currentUser);
			s->Show();
		}
};
}
