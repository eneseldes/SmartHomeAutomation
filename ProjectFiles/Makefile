# Compiler
CXX = g++
CXXFLAGS = -std=c++11 -I"C:/fltk-1.4.0-1" -I"C:/caktigimin_fltksi" -IHeaderFiles

# Linker Flags
LDFLAGS = -L C:/caktigimin_fltksi/lib -lfltk -lcomctl32 -lole32 -luuid -lgdi32 -lws2_32 -lgdiplus -lwinspool -lcomdlg32

# Target
TARGET = main.exe

# Directories
SRCDIR = SourceFiles
HEADERDIR = HeaderFiles

# Source Files
SRCS = $(SRCDIR)/main.cpp $(SRCDIR)/Admin.cpp $(SRCDIR)/Child.cpp $(SRCDIR)/Device.cpp \
       $(SRCDIR)/Home.cpp $(SRCDIR)/Room.cpp $(SRCDIR)/User.cpp \
	   $(SRCDIR)/SettableDevice.cpp $(SRCDIR)/Thermostat.cpp $(SRCDIR)/Curtain.cpp $(SRCDIR)/Fridge.cpp $(SRCDIR)/TV.cpp \
       $(SRCDIR)/KidSpeaker.cpp $(SRCDIR)/CanRing.cpp $(SRCDIR)/AlarmClock.cpp $(SRCDIR)/SecurityAlarm.cpp \
	   $(SRCDIR)/SecurityDevice.cpp $(SRCDIR)/Detector.cpp $(SRCDIR)/MotionDetector.cpp $(SRCDIR)/SmokeDetector.cpp $(SRCDIR)/SecurityCamera.cpp \
	   $(SRCDIR)/Dishwasher.cpp $(SRCDIR)/DryingMachine.cpp $(SRCDIR)/HasMode.cpp $(SRCDIR)/WashingMachine.cpp $(SRCDIR)/RobotVacuum.cpp 
# Build Rules
all: $(TARGET)

$(TARGET): FORCE
	$(CXX) $(CXXFLAGS) $(SRCS) -o $(TARGET)

clean:
	del $(TARGET)

FORCE:
