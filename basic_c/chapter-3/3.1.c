#include <math.h>
#include <stdio.h>
int main(void){
    double pi = 3.14;
    printf("sin(pi/2) = %f\n",sin(pi/2));
    return 0;
}
// gcc 3.1.c -lm -o 3.1