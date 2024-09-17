
# Makefile for TemplateSortingDemo

CXX = g++
CXXFLAGS = -std=c++11 -Wall
SRC = src/main.cpp
TARGET = TemplateSortingDemo

all: $(TARGET)

$(TARGET): $(SRC)
	$(CXX) $(CXXFLAGS) -o $(TARGET) $(SRC)

clean:
	rm -f $(TARGET)
