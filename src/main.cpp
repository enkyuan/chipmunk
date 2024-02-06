#include <iostream>
#include <thread>
#include <chrono>

#include "CPU.tpp"
#include "Memory.tpp"
#include "Display.tpp"

using namespace std;

int main() {
    CPU newCPU;
    Memory emulatorMemory;
    Display newDisplay;

    // TODO: change filename to relative path

    newCPU.initialize();
    emulatorMemory.initialize();

    while (true) {
        newCPU.emulateCycle();

        newDisplay.displayScreen();

        this_thread::sleep_for(chrono::milliseconds(10));
    }

    return 0;
}
