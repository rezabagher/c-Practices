#include <stdio.h>

/* 
Exercise 2-1: Write a program to determine the ranges of char, short, int, and long
variables, both signed and unsigned, by printing appropriate values from standard headers
and by direct computation. Harder if you compute them: determine the ranges of the various
floating-point types.
*/

int main() {
    //doing it :)
    printf("Length of int: %zu bytes\n", sizeof(int));
    printf("Length of unsigned int: %zu bytes\n", sizeof(unsigned int));
    printf("Length of short int: %zu bytes\n", sizeof(short int));
    printf("Length of char: %zu bytes\n", sizeof(char));
    printf("Length of float: %zu bytes\n", sizeof(float));
    printf("Length of double: %zu bytes\n", sizeof(double));
    printf("Length of long: %zu bytes\n", sizeof(long));
    return 0;
}
