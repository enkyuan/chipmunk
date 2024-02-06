//
// Created by Enkang Yuan on 12/20/23.
//

#pragma once

#include <cstdint>

const unsigned WIDTH = 64;
const unsigned HEIGHT = 32;

class Display {
public:
    Display();
    ~Display();

    void displayScreen(const uint8_t *display);
};