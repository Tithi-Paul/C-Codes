#include<stdio.h>
int main()
{
    int n, i, j;
    scanf("%d", &n);
    for(i=n;i>=1;i--){
        for(j=1;j<=(n-i);j++){
            printf("  ");
        }

        for(j=1;j<=i;j++){
            if(j<10)
                printf("0%d  ", j);
            else
                printf("%d  ", j);
        }
        printf("\n");
    }


    return 0;
}




