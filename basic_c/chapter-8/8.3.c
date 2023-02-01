#include <stdio.h>
#define N 3
int a[N] = { 1, 2, 3 };

void swap(int *x, int *y)
{
	int temp = *x;
	*x = *y;
	*y = temp;
}

void permute(int i, int n)
{
	if (i == n) {
		for (int j = 0; j < n; j++) {
			printf("%d ", a[j]);
		}
		printf("\n");
	} else {
		for (int j = i; j < n; j++) {
			swap(&a[i], &a[j]);
			permute(i + 1, n);
			swap(&a[i], &a[j]);
		}
	}
}

int main(void)
{
	    permute(0, N);
	    return 0;
}


// case 2 
// #include <stdio.h> 

// #define N 3 
// #define M 2 
// int a[N] = { 1, 2, 3 }; 

// void swap(int *x, int *y) 
// { 
//     int temp = *x; 
//     *x = *y; 
//     *y = temp; 
// } 

// void permute(int i, int n, int m) 
// { 
//     if (i == m) 
//     { 
//         for (int j = 0; j < m; j++) 
//             printf("%d ", a[j]); 
//         printf("\n"); 
//     } 
//     else
//     { 
//         for (int j = i; j < n; j++) 
//         { 
//             swap(&a[i], &a[j]); 
//             permute(i + 1, n, m); 
//             swap(&a[i], &a[j]); 
//         } 
//     } 
// } 

// int main() 
// { 
//     permute(0, N, M); 
//     return 0; 
// } 
