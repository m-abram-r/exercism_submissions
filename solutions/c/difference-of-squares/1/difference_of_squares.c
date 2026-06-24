#include "difference_of_squares.h"

unsigned int square(unsigned int base);

unsigned int square(unsigned int base) {
    return base * base;
}

unsigned int square_of_sum(unsigned int i) {
    return square(i*(i+1)/2);
}

unsigned int sum_of_squares(unsigned int i) {
    return (i*(i+1)*(2*i+1))/6;
}

unsigned int difference_of_squares(unsigned int i) {
    return square_of_sum(i) - sum_of_squares(i);
}

