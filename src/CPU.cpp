//
// Created by Enkang Yuan on 12/18/23.
//

#include "CPU.tpp"

const unsigned START_ADDRESS = 0x200;
const unsigned int FONTSET_START_ADDRESS = 0x50;

CPU::CPU() {
    pc = START_ADDRESS;
    // TODO: implement this
}

CPU::~CPU() {
    // TODO: implement this
}

void CPU::initialize() {
    loadFontSet();
}

void CPU::loadFontSet() {}

void CPU::LoadROM(const char *fileName) {
    ifstream file(fileName, ios::binary | ios::ate);

    if(file.is_open()) {
        streampos size = file.tellg();
        char *buffer = new char[size];

        file.seekg(0, ios::beg);
        file.read(buffer, size);
        file.close();

        for (long i = 0; i < size; i++) {
            memory[START_ADDRESS + i] = buffer[i];
        }

        delete[] buffer;
    }
}

void CPU::emulateCycle() {}

void CPU::fetch() {
    pc += 2;
}

void CPU::decode() {
    // TODO: implement this
    switch () {
        case x:
            break;
        case x:
            break;
    }
}

void CPU::execute() {}