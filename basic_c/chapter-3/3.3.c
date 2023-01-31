#include <stdio.h>
int increment(int x){
    return x+1;
}
int main(void){
    int x = 2;
    int _x = increment(x);
    printf("_x is:%d\n",_x);
    return 0;
}
