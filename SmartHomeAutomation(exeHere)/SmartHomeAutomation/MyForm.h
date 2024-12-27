#pragma once
#include "Home.h"
#include "Admin.h"
#include "User.h"
#include <msclr/marshal_cppstd.h>
#include "ControlPanel.h"
#include "Fridge.h"
#include "Thermostat.h"
#include "SecurityAlarm.h"
#include "Dishwasher.h"
#include "WashingMachine.h"
#include "Curtain.h"
#include "SmokeDetector.h"
#include "MotionDetector.h"
#include "DryingMachine.h"
#include "TV.h"
#include "SecurityCamera.h"

namespace SmartHomeAutomation {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}

	protected:

	protected:
	private:

		Home* home;
		Admin* admin;
		User* user;
	private: System::Windows::Forms::TextBox^ txtNickname;
	private: System::Windows::Forms::TextBox^ txtPassword;





	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;



	private: System::Windows::Forms::Button^ btnEnterSystem;
	private: System::Windows::Forms::Label^ label3;

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
			this->txtNickname = (gcnew System::Windows::Forms::TextBox());
			this->txtPassword = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->btnEnterSystem = (gcnew System::Windows::Forms::Button());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// txtNickname
			// 
			this->txtNickname->Location = System::Drawing::Point(130, 121);
			this->txtNickname->Name = L"txtNickname";
			this->txtNickname->Size = System::Drawing::Size(156, 24);
			this->txtNickname->TabIndex = 1;
			// 
			// txtPassword
			// 
			this->txtPassword->Location = System::Drawing::Point(130, 176);
			this->txtPassword->Name = L"txtPassword";
			this->txtPassword->PasswordChar = '*';
			this->txtPassword->Size = System::Drawing::Size(156, 24);
			this->txtPassword->TabIndex = 2;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(162)));
			this->label1->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->label1->Location = System::Drawing::Point(127, 98);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(79, 18);
			this->label1->TabIndex = 3;
			this->label1->Text = L"Nickname:";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->label2->Location = System::Drawing::Point(127, 155);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(75, 18);
			this->label2->TabIndex = 4;
			this->label2->Text = L"Password";
			// 
			// btnEnterSystem
			// 
			this->btnEnterSystem->Location = System::Drawing::Point(130, 217);
			this->btnEnterSystem->Name = L"btnEnterSystem";
			this->btnEnterSystem->Size = System::Drawing::Size(156, 49);
			this->btnEnterSystem->TabIndex = 8;
			this->btnEnterSystem->Text = L"Enter";
			this->btnEnterSystem->UseVisualStyleBackColor = true;
			this->btnEnterSystem->Click += gcnew System::EventHandler(this, &MyForm::btnEnterSystem_Click);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(162)));
			this->label3->Location = System::Drawing::Point(51, 36);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(386, 29);
			this->label3->TabIndex = 9;
			this->label3->Text = L"Smart Home Automation System";
			this->label3->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 18);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::GradientActiveCaption;
			this->ClientSize = System::Drawing::Size(411, 313);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->btnEnterSystem);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->txtPassword);
			this->Controls->Add(this->txtNickname);
			this->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(162)));
			this->Name = L"MyForm";
			this->Text = L"My Home";
			this->FormClosing += gcnew System::Windows::Forms::FormClosingEventHandler(this, &MyForm::MyForm_FormClosing);
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	private:
		System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
			home = Home::getInstance();

			admin = new Admin("admin", "12345"); // Default admin
			admin->addUser(home, admin);
			admin->addUser(home, new User("user", "123"));

			Room* kitchen = new Room("Kitchen");
			Room* livingRoom = new Room("LivingRoom");
			Room* bathroom = new Room("Bathroom");
			Room* bedroom = new Room("Bedroom");
			Room* childRoom = new Room("ChildrenRoom");

			home->getRooms().push_back(kitchen);
			home->getRooms().push_back(livingRoom);
			home->getRooms().push_back(bathroom);
			home->getRooms().push_back(bedroom);
			home->getRooms().push_back(childRoom);

			Thermostat* thermostat();
			Light* light();
			Curtain* curtain();
			SecurityAlarm* sa();

			for each(Room * room in home->getRooms())
			{
				admin->addDevice(room, new Thermostat());
				admin->addDevice(room, new Light());
				admin->addDevice(room, new Curtain());
				admin->addDevice(room, new SecurityAlarm());
				admin->addDevice(room, new Light());
				admin->addDevice(room, new SecurityCamera(new SecurityAlarm(), new MotionDetector(new SecurityAlarm())));
			}

			Dishwasher* dw();
			DryingMachine* dm();
			Fridge* f();
			Oven* oven();
			TV* tv();
			WashingMachine* wm();

			admin->addDevice(livingRoom, new TV());
			admin->addDevice(bathroom, new WashingMachine());
			admin->addDevice(kitchen, new Dishwasher());
			admin->addDevice(kitchen, new Oven());
			admin->addDevice(kitchen, new Fridge());
		}

		System::Void btnAddAsAdmin_Click(System::Object^ sender, System::EventArgs^ e) {
			// Dönüþüm ve nesne oluþturma
			std::string nickname = msclr::interop::marshal_as<std::string>(txtNickname->Text);
			std::string password = msclr::interop::marshal_as<std::string>(txtPassword->Text);

			Admin* a = new Admin(nickname, password);
			admin->addUser(home, a);
		}

		System::Void btnEnterSystem_Click(System::Object^ sender, System::EventArgs^ e) {
			std::string nickname = msclr::interop::marshal_as<std::string>(txtNickname->Text);
			std::string password = msclr::interop::marshal_as<std::string>(txtPassword->Text);

			for each(User * user in home->getUsers())
			{
				if (user->getNickname() == nickname && user->getPassword() == password)
				{
					txtNickname->Text = "";
					txtPassword->Text = "";

					ControlPanel^ cp = gcnew ControlPanel(user, this);
					cp->Show();
					this->Hide();
					return;
				}
			}

			MessageBox::Show("Access Denied!");
			txtNickname->Text = "";
			txtPassword->Text = "";
		}
		System::Void MyForm_FormClosing(System::Object^ sender, System::Windows::Forms::FormClosingEventArgs^ e) {
			home->saveState("home-state.txt");
		}
	};
}
