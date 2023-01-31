#include <stdio.h>
int foo(){
    int i;
    printf("%d\n",i);
    i = 777;
}
int main(void){
    foo();
    foo();
    return 0;
}
//21917
//777