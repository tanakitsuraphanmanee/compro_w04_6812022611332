#include <stdio.h>

void countcall() {
    int counter = 0; 
    static int counter_2 =0;
    counter++;
    counter_2++;
    printf("Call Function: normal counter : %d\n",counter);
    printf("Call Function: static counter: %d\n", counter_2);
}