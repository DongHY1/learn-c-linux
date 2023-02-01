#include <stdio.h>
void print_x(int x){
    printf("个位是:%d十位是:%d\n",x%10,x%100/10);
}
int main(void){
    int a = 2;
    if(a%2==0)
        printf("a %d is even\n",a);
    else
        printf("a %d is odd\n",a);
    print_x(31);
    
    return 0;
}