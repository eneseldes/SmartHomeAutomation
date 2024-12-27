# GROUP14

## Group Members
- Bilgenur Erkan
- Buse Köroğlu
- Enes Eldeş
- Enes Mert Aydın
- İdris Aydın

<p align="center">
  <img src="Project Reports/group-photo.jpeg" alt="Proje Görseli" width="70%">
</p>

## Smart Home Automation Application
Welcome to the repository for the **Smart Home Automation Application!** This project is designed to implement a cutting-edge home automation system using Object-Oriented Programming (OOP) principles.
## Table of Contents
- [Installation and Setup (Visual Studio)](#installation-and-setup-visual-studio)
- [Running with Powershell(cmd)](#running-with-powershellcmd)
- [Project Structure: Smart Home Automation System](#project-structure-smart-home-automation-system)

## Installation and Setup (Visual Studio):

1. First, download and install the latest version of Visual Studio.

2. During the installation process, on the "Workloads" page, select the "Desktop Development with C++" option.

3. In addition to the default selected features, on the "Individual Components" page, make sure to select:
   - "C++/CLI support for v142 build tools"
   - ".NET Framework 4.8 SDK"
   - ".NET Framework 4.7.2 Targeting Pack"
   - "v142 build tools"

4. After the installation completes, create a new project using the "CLR Empty Project (.NET Framework)" template.

5. Then, in the "Project Properties" section:
   - Go to **Linker - System** and set the **SubSystem** to `Windows`.
   - In the **Linker - Advanced** section, set the **Entry Point** to `main`.

6. Next, add a new item to the project by selecting "Add New Item" and choosing **UI**, then create a Windows Form structure.

7. To make the `MyForm.cpp` file work, the following code should be added:

   ```cpp
   using namespace System;
   using namespace System::Windows::Forms;

   [STAThreadAttribute]
   int main(array<String^>^ args) {
       Application::EnableVisualStyles();
       Application::SetCompatibleTextRenderingDefault(false);
       YourProjectName::MyForm form;
       Application::Run(% form);
   }
   ```

   Then, the program was compiled and run successfully.

8. The project's user interface is designed using the Windows Form we just created in the previous step.

9. In the **Configuration Manager**, make sure "Debug" and "x64" are selected. The project runs smoothly with the **Local Windows Debugger**.

## Running with Powershell(cmd):

1. After running the project in Visual Studio, you will find the `.exe` file in the `<Project Folder>\bin\Debug` directory.

2. Open PowerShell and navigate to the project folder. Then, run the project by typing:
   ```cmd
   .\ApplicationName.exe
   ```

## Project Structure: Smart Home Automation System

This diagram represents the classes and their relationships in a smart home automation system. The project includes fundamental structures such as **User**, **Room**, and **Device**, with inheritance and composition relationships between them.

### Core Classes and Relationships

#### Users and Management

- **User**: Represents the individuals using the system.
- **Admin**: Inherits from the `User` class and has administrative privileges.
- Users interact with `Room` objects and can log in or out of the system.

#### Devices and Inheritance

- **Device**: A base class for all devices.
  - **SecurityDevice**: Represents security-related devices. Subclasses include:
    - `SecurityAlarm`: Provides audible alarm functionality.
    - `SecurityCamera`: Combines motion detection and alarm functionality.
  - **Detector**:
    - `MotionDetector`: Detects motion.
    - `SmokeDetector`: Detects smoke.
  - **SettableDevice**: Represents adjustable devices. Subclasses include:
    - Devices like `TV`, `Thermostat`, `Fridge`, `Curtain`, and `Light`.

#### Mode Settings

- **HasMode**: Represents operating modes for devices.
  - Devices like `Oven`, `Dishwasher`, `DryingMachine`, and `WashingMachine` include enumerations for operating modes (e.g., `OvenCookMode`, `DishwasherMode`).

#### Room and Home

- **Room**: Contains devices and users.
- **Home**: Includes multiple rooms and allows users to navigate between them.

### Inheritance and Has-a Relationships

#### Inheritance

- The `Device` class serves as the parent class for all devices, supporting polymorphic behavior. For example, all devices calculate their energy consumption via the `getEnergyConsumption()` function.

#### Has-a (Composition)

- `SecurityCamera` has a `MotionDetector` and a `SecurityAlarm` device.
- `Room` contains lists of devices and users.
