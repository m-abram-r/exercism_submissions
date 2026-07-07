#include "grains.h"

uint64_t square(uint8_t index) {
    if (index > 64 || index == 0) return 0;
    uint64_t grains = 1;
    return grains << (index - 1);
}

uint64_t total(void) {
    return UINT64_MAX;
}