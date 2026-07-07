#include "grains.h"

uint64_t square(uint8_t index) {
    if (index == 1) return 1;
    if (index > 64 || index == 0) return 0;
    uint64_t grains = 2;
    for (uint8_t i = 0; i < index - 2; i++) {
        grains *= 2;
    }
    return grains;
}

uint64_t total(void) {
    return UINT64_MAX;
}