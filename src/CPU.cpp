//
// Created by Enkang Yuan on 12/18/23.
//

#include "CPU.tpp"
#include "Memory.tpp"

const unsigned START_ADDRESS = 0x200;
const unsigned int FONTSET_START_ADDRESS = 0x50;

CPU::CPU() {
    // TODO: implement this
    pc = START_ADDRESS;

    for (unsigned int i = 0; i < FONTSET_SIZE; ++i) {
        memory[FONTSET_START_ADDRESS + i] = fontset[i];
    }
}

CPU::~CPU() {
    // TODO: implement this

}

void CPU::initialize() {
    loadFontSet();
}

void CPU::loadFontSet() {}

void CPU::loadROM(const char *fileName) {
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
    // TODO: implement this
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

// opcodes



