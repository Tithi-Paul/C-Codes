#include<stdio.h>

int main()
{
    int a, b, c;
    scanf("%d%d%d", &a, &b, &c);
    if(a==b || b==c || c==a)
        printf("YES\n");

    if(a>b && a>c){
        if(b+c > a)
            printf("YES\n");
        else
            printf("No\n");

    }
    else if(b>a && b>c){
        if(a+c > b)
            printf("YES\n");
        else
            printf("No\n");

    }
    else if(c>a && c>b){
        if(a+b > c)
            printf("YES\n");
        else
            printf("No\n");

    }

    return 0;
}


