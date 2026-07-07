#include "difference_of_squares.h"


unsigned int square_of_sum(unsigned int i) {
    unsigned int sum = (i*(i+1)/2);
    return sum * sum;
}

unsigned int sum_of_squares(unsigned int i) {
    return (i*(i+1)*(2*i+1))/6;
}

unsigned int difference_of_squares(unsigned int i) {
    return square_of_sum(i) - sum_of_squares(i);
}

