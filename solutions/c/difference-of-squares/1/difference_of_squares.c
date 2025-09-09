#include "difference_of_squares.h"

unsigned int sum_of_squares(unsigned int number){
    int sum_squares = 0;
    for(unsigned int i=1; i<=number; i=i+1){
        sum_squares  = sum_squares + i*i;
    }
    return sum_squares;
}
unsigned int square_of_sum(unsigned int number){
    int square_sum = 0;
    for(unsigned int j=1; j<=number; j =j+1){
        square_sum = square_sum  + j;
    }
    return square_sum * square_sum ;
}
unsigned int difference_of_squares(unsigned int number){
    return square_of_sum(number) - sum_of_squares(number);
}