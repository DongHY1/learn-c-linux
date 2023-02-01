#include <stdio.h>
#include <stdlib.h>
#define N 20
int a[N];
void generate_random(int upper_bound){
    for(int i =0;i<N;i++){
        a[i]=rand() % upper_bound;
    }
}
void print_random(){
    for(int i=0;i<N;i++){
        printf("a[%d] value is [%d]\n",i,a[i]);
    }
}
int main(void){
    generate_random(10);
    print_random();
    return 0;
}

// by chatGPT
// 这段代码输出的值恒定，是因为缺少随机数生成的初始化操作。
// 在C语言中，使用rand()函数生成随机数时，必须在生成随机数前调用srand()函数对随机数生成器进行初始化，否则生成的随机数将是相同的。
// 修改代码如下：
// #include <stdio.h>
// #include <stdlib.h>
// #include <time.h>
// #define N 20
// int a[N];
// void generate_random(int upper_bound){
// srand(time(NULL));
// for(int i =0;i<N;i++){
// a[i]=rand() % upper_bound;
// }
// }
// void print_random(){
// for(int i=0;i<N;i++){
// printf("a[%d] value is [%d]\n",i,a[i]);
// }
// }
// int main(void){
// generate_random(10);
// print_random();
// return 0;
// }

// 这样，每次生成的随机数都是不同的。



