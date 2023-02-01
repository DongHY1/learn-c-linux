#include <stdio.h>
#define N 6
int main(void){
    char str[N] = "Hello";
    for(int i=0;i<N;i++){
        printf("%c\n",str[i]);
    }
    return 0;
}