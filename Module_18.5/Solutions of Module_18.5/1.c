#include<stdio.h>
int main()
{
    int n, i, j, k, anss=0;
    scanf("%d", &n);
    if(n>0){
        for(i=n; i>= (-1*n); i--){
            printf("%d ", i);
        }
    }
    else{
        for(i=n; i<= (-1*n); i++){
            printf("%d ", i);
        }
    }
    printf("\n");
    return 0;
}

