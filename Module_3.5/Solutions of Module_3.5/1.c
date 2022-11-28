#include<stdio.h>

int main()
{
    int a, b;
    scanf("%d%d", &a, &b);
    if(a>b){
        printf("A is Bigger\n");
    }
    else if(a<b){
        printf("B is Bigger\n");
    }
    else
        printf("They are equal\n");
    return 0;
}
