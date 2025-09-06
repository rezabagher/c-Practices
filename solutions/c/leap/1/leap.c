#include "leap.h"

bool leap_year(int year){
    if(year%400 == 0){
        return true; // leap year
    }
    else if(year%100 == 0){
        return false; // not a leap year
    }
    if(year%4 == 0){
        return true; // leap year
    }
    return false ;//not divisible by 4
}
