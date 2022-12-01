#include<stdio.h>

void draw(int n)
{
    int i, j;
    for(i=n; i>0; i--){
        for(j=0; j<(n-i); j++){
            printf("  ");
        }
        for(j=1; j<=i; j++){
            printf(" * ");
        }
        printf("\n");
    }
}

int main()
{
    int n;
    scanf("%d", &n);

    draw(n);

    return 0;
}




