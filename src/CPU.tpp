//
// Created by Enkang Yuan on 12/18/23.
//

#pragma once

#include <cstdint>
#include <fstream>

#include "Display.tpp"

#ifndef CHIPMUNK_EMULATOR_TPP
#define CHIPMUNK_EMULATOR_TPP

using namespace std;

class CPU {
public:
    uint8_t registers[16]{};            //  16 8-bit registers
    uint8_t memory[4096]{};             //  4 KB of memory
    uint16_t index{};                   //  index register
    uint16_t pc{};                      //  program counter
    uint16_t stack{};                   //  16-level stack
    uint8_t sp{};                       //  stack pointer
    uint8_t dt{};                       //  delay timer
    uint8_t st{};                       //  sound timer
    uint8_t kp[16]{};                   //  key pad
    uint32_t display[WIDTH * HEIGHT]{}; //  64 x 32 video
    uint16_t opcode;                    //  ...

    CPU();                              //  constructor
    ~CPU();                             //  destructor

    void initialize();
    static void loadFontSet();
    void LoadROM(const char *fileName); //  ...
    void emulateCycle();

private:
    void fetch();
    void decode();
    void execute();
};

#endif //CHIPMUNK_EMULATOR_TPP
