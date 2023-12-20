//
// Created by Enkang Yuan on 12/18/23.
//

#include "Emulator.tpp"

const unsigned START_ADDRESS = 0x200;
const unsigned int FONTSET_START_ADDRESS = 0x50;

Emulator::Emulator() {
    pc = START_ADDRESS;
    // TODO: implement this
}

Emulator::~Emulator() {
    // TODO: implement this
}

void Emulator::initialize() {
    loadFontSet();
}

void Emulator::loadFontSet() {

}

void Emulator::LoadROM(const char *fileName) {
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

void Emulator::emulateCycle() {

}

void Emulator::fetch() {
    pc += 2;
}

void Emulator::decode() {
    // TODO: implement this
    switch () {
        case x:
            break;
        case x:
            break;
    }
}

void Emulator::execute() {

}