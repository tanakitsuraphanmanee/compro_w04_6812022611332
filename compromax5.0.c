#include <stdio.h>

void function() {
    int value = 99;
    printf("value in funtion: %d\n" , value);
}

int main() {
    int value =42;
    printf("value in main (before): %d\n" , value);

functionB();

printf("value in main (before): %d\n", value); 
return 0;
}