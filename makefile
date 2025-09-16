# Name of the executable (based on your main file)
TARGET = main
# Compiler
CXX = g++
# Compiler flags
CXXFLAGS = -std=c++17 -g -fdiagnostics-color=always -static-libgcc -static-libstdc++

# Default target: build and run
all: $(TARGET).exe
	@echo Running $(TARGET).exe...
	./$(TARGET).exe

# Compile .cpp to .exe
$(TARGET).exe: $(TARGET).cpp
	$(CXX) $(CXXFLAGS) $< -o $@

# Clean the executable
clean:
	del $(TARGET).exe
