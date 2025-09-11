#include "collatz_conjecture.h"
int steps(int start){
    if(start<1){
        return -1;
    }
    int c = 0;
    while(start > 1){
    if(start%2==0){
        start = start/2;
    }
    else if(start%2 != 0){
        start = 3 * start + 1;
    }
         c = c + 1;
    
}
return c;
}