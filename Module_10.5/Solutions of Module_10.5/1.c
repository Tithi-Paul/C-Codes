#include<stdio.h>
int main()
///Fibonacci Series
{
    int n, i, j, fibo = 0, count = 0, first = 0, second = 1;
    scanf("%d", &n);

    for(count=0; count<n; count++){
        if(count <= 1){
            fibo = count;
        }
        else{
            fibo = first + second;
            first = second;
            second = fibo;
        }
        printf("%d ", fibo);
    }

    printf("\n");

    return 0;
}



