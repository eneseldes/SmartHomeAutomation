# Compiler
CXX = g++
CXXFLAGS = -std=c++11 -IHeaderFiles

# Target
TARGET = main.exe

# Directories
SRCDIR = SourceFiles
HEADERDIR = HeaderFiles

# Source Files
SRCS = $(SRCDIR)/main.cpp $(SRCDIR)/Admin.cpp $(SRCDIR)/Child.cpp $(SRCDIR)/Device.cpp \
       $(SRCDIR)/Home.cpp $(SRCDIR)/Room.cpp $(SRCDIR)/User.cpp

# Build Rules
all: $(TARGET)

$(TARGET): FORCE
	$(CXX) $(CXXFLAGS) $(SRCS) -o $(TARGET)

clean:
	del $(TARGET)

FORCE:
