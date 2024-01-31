CXX = g++
CXXFLAGS = -Wall
SRC_DIR = 12201052_12018792_12202776/src
BIN_DIR = 12201052_12018792_12202776/bin

all: mainTest

mainTest: $(SRC_DIR)/mainTest.cpp
	$(CXX) $(CXXFLAGS) -o $(BIN_DIR)/mainTest $(SRC_DIR)/mainTest.cpp

clean:
	rm -f $(BIN_DIR)/*.o $(BIN_DIR)/mainTest
