#include <stdio.h>
void print_x(int x){
    switch(x){
        case 1:
            printf("Hello,Monday\n");
            break;
        case 2:
            printf("Hello Tuesday\n");
            break;
        default:
            printf("I don't know\n");
            break;
    }
}
int main(void){
    print_x(7);
    return 0;
}