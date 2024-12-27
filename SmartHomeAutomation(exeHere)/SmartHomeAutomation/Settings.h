#pragma once
#include <msclr/marshal_cppstd.h>
#include "User.h"
#include "Admin.h"
#include "Light.h"

namespace SmartHomeAutomation {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Settings
	/// </summary>
	public ref class Settings : public System::Windows::Forms::Form
	{
	private:
		Home* home;
		User* currentUser;

	public:
		Settings(User* user)
		{
			InitializeComponent();
			currentUser = user;
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Settings()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Button^ btnChildrenRoom;
	private: System::Windows::Forms::Button^ btnBedroom;
	private: System::Windows::Forms::Button^ btnBathroom;
	private: System::Windows::Forms::Button^ btnLivingRoom;
	private: System::Windows::Forms::Button^ btnKitchen;
	private: System::Windows::Forms::Panel^ panel1;

	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::ComboBox^ deviceToRemoveComboBox;

	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::ComboBox^ deviceToAddComboBox;

	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::ComboBox^ roomComboBox;

	private: System::Windows::Forms::Panel^ panel3;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::TextBox^ txtUserToRemove;


	private: System::Windows::Forms::Button^ btnRemoveUser;

	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Button^ btnRemoveDevice;

	private: System::Windows::Forms::Button^ btnAddDevice;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::TextBox^ txtAddingPassword;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::TextBox^ txtAddingNickname;
	private: System::Windows::Forms::Button^ btnAddUser;


	protected:

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
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->btnChildrenRoom = (gcnew System::Windows::Forms::Button());
			this->btnBedroom = (gcnew System::Windows::Forms::Button());
			this->btnBathroom = (gcnew System::Windows::Forms::Button());
			this->btnLivingRoom = (gcnew System::Windows::Forms::Button());
			this->btnKitchen = (gcnew System::Windows::Forms::Button());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->txtAddingPassword = (gcnew System::Windows::Forms::TextBox());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->txtAddingNickname = (gcnew System::Windows::Forms::TextBox());
			this->btnAddUser = (gcnew System::Windows::Forms::Button());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->txtUserToRemove = (gcnew System::Windows::Forms::TextBox());
			this->btnRemoveUser = (gcnew System::Windows::Forms::Button());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->btnRemoveDevice = (gcnew System::Windows::Forms::Button());
			this->btnAddDevice = (gcnew System::Windows::Forms::Button());
			this->deviceToRemoveComboBox = (gcnew System::Windows::Forms::ComboBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->deviceToAddComboBox = (gcnew System::Windows::Forms::ComboBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->roomComboBox = (gcnew System::Windows::Forms::ComboBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->panel1->SuspendLayout();
			this->panel3->SuspendLayout();
			this->panel2->SuspendLayout();
			this->SuspendLayout();
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(162)));
			this->label3->Location = System::Drawing::Point(192, 27);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(63, 29);
			this->label3->TabIndex = 10;
			this->label3->Text = L"Visit";
			this->label3->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// btnChildrenRoom
			// 
			this->btnChildrenRoom->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(162)));
			this->btnChildrenRoom->Location = System::Drawing::Point(227, 107);
			this->btnChildrenRoom->Name = L"btnChildrenRoom";
			this->btnChildrenRoom->Size = System::Drawing::Size(136, 42);
			this->btnChildrenRoom->TabIndex = 15;
			this->btnChildrenRoom->Text = L"ChildrenRoom";
			this->btnChildrenRoom->UseVisualStyleBackColor = true;
			this->btnChildrenRoom->Click += gcnew System::EventHandler(this, &Settings::OnVisitRoomClick);
			// 
			// btnBedroom
			// 
			this->btnBedroom->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(162)));
			this->btnBedroom->Location = System::Drawing::Point(85, 107);
			this->btnBedroom->Name = L"btnBedroom";
			this->btnBedroom->Size = System::Drawing::Size(136, 42);
			this->btnBedroom->TabIndex = 14;
			this->btnBedroom->Text = L"Bedroom";
			this->btnBedroom->UseVisualStyleBackColor = true;
			this->btnBedroom->Click += gcnew System::EventHandler(this, &Settings::OnVisitRoomClick);
			// 
			// btnBathroom
			// 
			this->btnBathroom->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(162)));
			this->btnBathroom->Location = System::Drawing::Point(299, 59);
			this->btnBathroom->Name = L"btnBathroom";
			this->btnBathroom->Size = System::Drawing::Size(136, 42);
			this->btnBathroom->TabIndex = 13;
			this->btnBathroom->Text = L"Bathroom";
			this->btnBathroom->UseVisualStyleBackColor = true;
			this->btnBathroom->Click += gcnew System::EventHandler(this, &Settings::OnVisitRoomClick);
			// 
			// btnLivingRoom
			// 
			this->btnLivingRoom->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(162)));
			this->btnLivingRoom->Location = System::Drawing::Point(157, 59);
			this->btnLivingRoom->Name = L"btnLivingRoom";
			this->btnLivingRoom->Size = System::Drawing::Size(136, 42);
			this->btnLivingRoom->TabIndex = 12;
			this->btnLivingRoom->Text = L"LivingRoom";
			this->btnLivingRoom->UseVisualStyleBackColor = true;
			this->btnLivingRoom->Click += gcnew System::EventHandler(this, &Settings::OnVisitRoomClick);
			// 
			// btnKitchen
			// 
			this->btnKitchen->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(162)));
			this->btnKitchen->Location = System::Drawing::Point(15, 59);
			this->btnKitchen->Name = L"btnKitchen";
			this->btnKitchen->Size = System::Drawing::Size(136, 42);
			this->btnKitchen->TabIndex = 11;
			this->btnKitchen->Text = L"Kitchen";
			this->btnKitchen->UseVisualStyleBackColor = true;
			this->btnKitchen->Click += gcnew System::EventHandler(this, &Settings::OnVisitRoomClick);
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->panel1->Controls->Add(this->panel3);
			this->panel1->Controls->Add(this->panel2);
			this->panel1->Controls->Add(this->label1);
			this->panel1->Location = System::Drawing::Point(-5, 166);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(455, 372);
			this->panel1->TabIndex = 16;
			// 
			// panel3
			// 
			this->panel3->BackColor = System::Drawing::SystemColors::GradientInactiveCaption;
			this->panel3->Controls->Add(this->label10);
			this->panel3->Controls->Add(this->txtAddingPassword);
			this->panel3->Controls->Add(this->label8);
			this->panel3->Controls->Add(this->txtAddingNickname);
			this->panel3->Controls->Add(this->btnAddUser);
			this->panel3->Controls->Add(this->label7);
			this->panel3->Controls->Add(this->txtUserToRemove);
			this->panel3->Controls->Add(this->btnRemoveUser);
			this->panel3->Controls->Add(this->label9);
			this->panel3->Location = System::Drawing::Point(-6, 53);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(466, 141);
			this->panel3->TabIndex = 14;
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(349, 38);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(75, 18);
			this->label10->TabIndex = 22;
			this->label10->Text = L"Password";
			// 
			// txtAddingPassword
			// 
			this->txtAddingPassword->Location = System::Drawing::Point(337, 59);
			this->txtAddingPassword->Name = L"txtAddingPassword";
			this->txtAddingPassword->Size = System::Drawing::Size(100, 24);
			this->txtAddingPassword->TabIndex = 21;
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(241, 38);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(75, 18);
			this->label8->TabIndex = 20;
			this->label8->Text = L"Nickname";
			// 
			// txtAddingNickname
			// 
			this->txtAddingNickname->Location = System::Drawing::Point(229, 59);
			this->txtAddingNickname->Name = L"txtAddingNickname";
			this->txtAddingNickname->Size = System::Drawing::Size(100, 24);
			this->txtAddingNickname->TabIndex = 19;
			// 
			// btnAddUser
			// 
			this->btnAddUser->Location = System::Drawing::Point(229, 89);
			this->btnAddUser->Name = L"btnAddUser";
			this->btnAddUser->Size = System::Drawing::Size(208, 37);
			this->btnAddUser->TabIndex = 18;
			this->btnAddUser->Text = L"Add";
			this->btnAddUser->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageAboveText;
			this->btnAddUser->UseVisualStyleBackColor = true;
			this->btnAddUser->Click += gcnew System::EventHandler(this, &Settings::btnAddUser_Click);
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(55, 38);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(75, 18);
			this->label7->TabIndex = 17;
			this->label7->Text = L"Nickname";
			// 
			// txtUserToRemove
			// 
			this->txtUserToRemove->Location = System::Drawing::Point(43, 59);
			this->txtUserToRemove->Name = L"txtUserToRemove";
			this->txtUserToRemove->Size = System::Drawing::Size(100, 24);
			this->txtUserToRemove->TabIndex = 16;
			// 
			// btnRemoveUser
			// 
			this->btnRemoveUser->Location = System::Drawing::Point(43, 89);
			this->btnRemoveUser->Name = L"btnRemoveUser";
			this->btnRemoveUser->Size = System::Drawing::Size(100, 37);
			this->btnRemoveUser->TabIndex = 15;
			this->btnRemoveUser->Text = L"Remove";
			this->btnRemoveUser->UseVisualStyleBackColor = true;
			this->btnRemoveUser->Click += gcnew System::EventHandler(this, &Settings::btnRemoveUser_Click);
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(162)));
			this->label9->Location = System::Drawing::Point(146, 10);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(160, 20);
			this->label9->TabIndex = 14;
			this->label9->Text = L"Add/Remove User";
			this->label9->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// panel2
			// 
			this->panel2->BackColor = System::Drawing::SystemColors::GradientInactiveCaption;
			this->panel2->Controls->Add(this->btnRemoveDevice);
			this->panel2->Controls->Add(this->btnAddDevice);
			this->panel2->Controls->Add(this->deviceToRemoveComboBox);
			this->panel2->Controls->Add(this->label6);
			this->panel2->Controls->Add(this->deviceToAddComboBox);
			this->panel2->Controls->Add(this->label5);
			this->panel2->Controls->Add(this->label4);
			this->panel2->Controls->Add(this->label2);
			this->panel2->Controls->Add(this->roomComboBox);
			this->panel2->Location = System::Drawing::Point(-6, 213);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(466, 137);
			this->panel2->TabIndex = 13;
			// 
			// btnRemoveDevice
			// 
			this->btnRemoveDevice->Location = System::Drawing::Point(367, 76);
			this->btnRemoveDevice->Name = L"btnRemoveDevice";
			this->btnRemoveDevice->Size = System::Drawing::Size(80, 26);
			this->btnRemoveDevice->TabIndex = 20;
			this->btnRemoveDevice->Text = L"Remove";
			this->btnRemoveDevice->UseVisualStyleBackColor = true;
			this->btnRemoveDevice->Click += gcnew System::EventHandler(this, &Settings::btnRemoveDevice_Click);
			// 
			// btnAddDevice
			// 
			this->btnAddDevice->Location = System::Drawing::Point(367, 44);
			this->btnAddDevice->Name = L"btnAddDevice";
			this->btnAddDevice->Size = System::Drawing::Size(79, 26);
			this->btnAddDevice->TabIndex = 19;
			this->btnAddDevice->Text = L"Add";
			this->btnAddDevice->UseVisualStyleBackColor = true;
			this->btnAddDevice->Click += gcnew System::EventHandler(this, &Settings::btnAddDevice_Click);
			// 
			// deviceToRemoveComboBox
			// 
			this->deviceToRemoveComboBox->FormattingEnabled = true;
			this->deviceToRemoveComboBox->Location = System::Drawing::Point(249, 76);
			this->deviceToRemoveComboBox->Name = L"deviceToRemoveComboBox";
			this->deviceToRemoveComboBox->Size = System::Drawing::Size(112, 26);
			this->deviceToRemoveComboBox->TabIndex = 18;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(179, 79);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(68, 18);
			this->label6->TabIndex = 17;
			this->label6->Text = L"Remove:";
			// 
			// deviceToAddComboBox
			// 
			this->deviceToAddComboBox->FormattingEnabled = true;
			this->deviceToAddComboBox->Location = System::Drawing::Point(249, 44);
			this->deviceToAddComboBox->Name = L"deviceToAddComboBox";
			this->deviceToAddComboBox->Size = System::Drawing::Size(112, 26);
			this->deviceToAddComboBox->TabIndex = 16;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(210, 47);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(37, 18);
			this->label5->TabIndex = 15;
			this->label5->Text = L"Add:";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(162)));
			this->label4->Location = System::Drawing::Point(146, 10);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(178, 20);
			this->label4->TabIndex = 14;
			this->label4->Text = L"Add/Remove Device";
			this->label4->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(22, 62);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(54, 18);
			this->label2->TabIndex = 13;
			this->label2->Text = L"Room:";
			// 
			// roomComboBox
			// 
			this->roomComboBox->FormattingEnabled = true;
			this->roomComboBox->Location = System::Drawing::Point(78, 59);
			this->roomComboBox->Name = L"roomComboBox";
			this->roomComboBox->Size = System::Drawing::Size(92, 26);
			this->roomComboBox->TabIndex = 12;
			this->roomComboBox->SelectedIndexChanged += gcnew System::EventHandler(this, &Settings::roomComboBox_SelectedIndexChanged);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(162)));
			this->label1->Location = System::Drawing::Point(148, 12);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(179, 29);
			this->label1->TabIndex = 11;
			this->label1->Text = L"Administration";
			this->label1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// Settings
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 18);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::GradientActiveCaption;
			this->ClientSize = System::Drawing::Size(448, 536);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->btnChildrenRoom);
			this->Controls->Add(this->btnBedroom);
			this->Controls->Add(this->btnBathroom);
			this->Controls->Add(this->btnLivingRoom);
			this->Controls->Add(this->btnKitchen);
			this->Controls->Add(this->label3);
			this->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(162)));
			this->Name = L"Settings";
			this->Text = L"Settings";
			this->Load += gcnew System::EventHandler(this, &Settings::Settings_Load);
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->panel3->ResumeLayout(false);
			this->panel3->PerformLayout();
			this->panel2->ResumeLayout(false);
			this->panel2->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private:
		System::Void Settings_Load(System::Object^ sender, System::EventArgs^ e) {
			home = Home::getInstance();

			if (dynamic_cast<Admin*>(currentUser) == nullptr)
			{
				panel1->Visible = false;
			}

			for each (Room * room in home->getRooms())
			{
				System::String^ roomName = gcnew String(room->getName().c_str());
				roomComboBox->Items->Add(roomName);
			}

			deviceToAddComboBox->Items->Add("Curtain");
			deviceToAddComboBox->Items->Add("Dishwasher");
			deviceToAddComboBox->Items->Add("DryingMachine");
			deviceToAddComboBox->Items->Add("Fridge");
			deviceToAddComboBox->Items->Add("Light");
			deviceToAddComboBox->Items->Add("Oven");
			deviceToAddComboBox->Items->Add("Thermostat");
			deviceToAddComboBox->Items->Add("TV");
			deviceToAddComboBox->Items->Add("WashingMachine");
		}

		System::Void btnRemoveUser_Click(System::Object^ sender, System::EventArgs^ e) {
			Admin* admin = (Admin*)currentUser;
			std::string nicknameToRemove = msclr::interop::marshal_as<std::string>(txtUserToRemove->Text);

			admin->removeUser(home, nicknameToRemove);
		}

		// Device on/off and set HasMode is implemented here
		System::Void OnVisitRoomClick(Object^ sender, EventArgs^ e) {
			Button^ clickedButton = (Button^)sender;
			std::string stdRoomName = msclr::interop::marshal_as<std::string>(clickedButton->Text);

			// Visit room
			for each (Room * room in home->getRooms())
				if (stdRoomName == room->getName())
					currentUser->visitRoom(room);
		}

		System::Void btnAddUser_Click(System::Object^ sender, System::EventArgs^ e) {
			Admin* admin = (Admin*)currentUser;
			std::string addingNickname = msclr::interop::marshal_as<std::string>(txtAddingNickname->Text);
			std::string addingPassword = msclr::interop::marshal_as<std::string>(txtAddingPassword->Text);

			admin->addUser(home, addingNickname, addingPassword);

			txtAddingNickname->Text = "";
			txtAddingPassword->Text = "";
		}

		System::Void roomComboBox_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
			ComboBox^ clickedComboBox = (ComboBox^)sender;
			std::string stdComboBoxText = msclr::interop::marshal_as<std::string>(clickedComboBox->SelectedItem->ToString());

			deviceToRemoveComboBox->Items->Clear();

			for each (Room * room in home->getRooms())
			{
				if (room->getName() == stdComboBoxText)
				{
					for each (Device * device in room->getDevices())
					{
						System::String^ deviceName = gcnew String(device->getName().c_str());
						deviceToRemoveComboBox->Items->Add(deviceName);
					}
				}
			}
		}
		System::Void btnRemoveDevice_Click(System::Object^ sender, System::EventArgs^ e) {
			Admin* admin = (Admin*)currentUser;

			std::string roomName = msclr::interop::marshal_as<std::string>(roomComboBox->SelectedItem->ToString());
			std::string deviceName = msclr::interop::marshal_as<std::string>(deviceToRemoveComboBox->SelectedItem->ToString());

			for each (Room * room in home->getRooms())
			{
				if (room->getName() == roomName)
				{
					for each (Device * device in room->getDevices()) {
						if (device->getName() == deviceName)
						{
							admin->removeDevice(home, roomName, deviceName);
							deviceToRemoveComboBox->Items->Clear();
						}
					}
				}
			}
		}

		System::Void btnAddDevice_Click(System::Object^ sender, System::EventArgs^ e) {
			if (roomComboBox->SelectedItem == nullptr || deviceToAddComboBox->SelectedItem == nullptr)
			{
				System::Windows::Forms::MessageBox::Show("Select the room and device properly!");
				return;
			}

			System::String^ roomName = gcnew String(roomComboBox->SelectedItem->ToString());
			System::String^ deviceName = gcnew String(deviceToAddComboBox->SelectedItem->ToString());

			std::string stdRoomName = msclr::interop::marshal_as<std::string>(roomName);
			std::string stdDeviceName = msclr::interop::marshal_as<std::string>(deviceName);

			Room* room;
			Device* device;

			for each (Room * itRoom in home->getRooms())
			{
				if (itRoom->getName() == stdRoomName)
				{
					room = itRoom;
					for each (Device * itDevice in itRoom->getDevices())
					{
						if (itDevice->getName() == stdDeviceName)
						{
							device = itDevice;
							System::Windows::Forms::MessageBox::Show(deviceName + " is already in the " + roomName);
							return;
						}
					}
				}
			}
			
			Admin* admin = (Admin*)currentUser;
			System::Windows::Forms::MessageBox::Show(gcnew String(device->getName().c_str()) + " is added into " + gcnew String(room->getName().c_str()));

			admin->addDevice(new Room("Aaa"), new Light());
			System::Windows::Forms::MessageBox::Show(deviceName + " is added into " + roomName);
		}
	};
}
