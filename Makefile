CXX = g++
CXXFLAGS = -Wall -std=c++11
SRC = Taylor.cpp

ifeq ($(OS),Windows_NT)
	TARGET = programa.exe
	RUN = ./programa.exe
	DEL = del /Q
else
	TARGET = programa
	RUN = ./programa
	DEL = rm -f
endif

build:
	$(CXX) $(CXXFLAGS) $(SRC) -o $(TARGET)

run: build
	$(RUN)

clean:
	$(DEL) $(TARGET)
