//
// Created by Enkang Yuan on 12/18/23.
//

#include <cstdint>
#include <fstream>

#ifndef CHIPMUNK_EMULATOR_TPP
#define CHIPMUNK_EMULATOR_TPP

using namespace std;

const unsigned START_ADDRESS = 0x200;

class Emulator {
    uint8_t registers[16]{};        //  16 8-bit registers
    uint8_t memory[4096]{};         //  4 KB of memory
    uint16_t index{};               //  ...
    uint16_t pc{};                  //  program counter
    uint16_t stack{};               //  16-level stack
    uint8_t sp{};                   //  stack pointer
    uint8_t dt{};                   //  delay timer
    uint8_t st{};                   //  sound timer
    uint8_t kp[16]{};               //  key pad
    uint32_t display[64 * 32]{};    //  64 x 32 video
    uint16_t opcode;                //  ...
};

void Emulator::LoadROM(char const * fileName) {
    ifstream file(fileName, ios::binary | ios::ate);

    if(file.is_open()) {
        streampos size = file.tellg();
        char *buffer = new char[size];

        file.seekg(0, ios::beg);
        file.read(buffer, size);
        file.close();

        for (long i = 0; i < size; i++) {
            memory[START_ADDRESS + i] = buffer[i];

            delete[] buffer;
        }
    }
}

#endif //CHIPMUNK_EMULATOR_TPP
