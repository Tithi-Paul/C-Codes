#include<stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    if(n>=0 && n<=32)
        printf("F\n");
    else if(n>=33 && n<=39)
        printf("D\n");
    else if(n>=40 && n<=49)
        printf("C\n");
    else if(n>=50 && n<=59)
        printf("B\n");
    else if(n>=60 && n<=69)
        printf("A-\n");
    else if(n>=70 && n<=79)
        printf("A\n");
    else if(n>=80)
        printf("A+\n");

    return 0;
}
