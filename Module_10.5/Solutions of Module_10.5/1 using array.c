#include<stdio.h>
int main()
///Fibonacci Series
{
    int n, i, j, count, first = 0, second = 1;

    scanf("%d", &n);
    int fibo[n+5];
    for(count=0; count<n; count++){
        if(count <= 1){
            fibo[count] = count;
        }
        else{
            fibo[count] = fibo[count-2] + fibo[count-1];

        }
    }
    for(i=0; i<n; i++){
        printf("%d ", fibo[i]);
    }

    printf("\n");

    return 0;
}




