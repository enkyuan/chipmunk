//
// Created by Enkang Yuan on 12/29/23.
//

#include "CPU.tpp"
#include "Display.tpp"

void 00E0(CPU& cpu) {
    for (int r = 0; r < HEIGHT; r++) {
        for (int c = 0; c < WIDTH; c++) {
            cpu.display[r][c] = 0;
        }
    }
}

void 1NNN(CPU& cpu, uint16_t opcode) {

}

void 00EE(CPU& cpu, uint16_t opcode) {

}

void 2NNN(CPU& cpu, uint16_t opcode) {

}

void dispatchOpcode() {

}