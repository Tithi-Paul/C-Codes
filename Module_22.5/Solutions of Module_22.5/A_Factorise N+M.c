#include<stdio.h>

void prime(int n)
{
    if(n==2)
        printf("7\n");

    else
        printf("%d\n", n);
}

int main()
{
    int t;
    scanf("%d", &t);
    while(t--){
        int n;
        scanf("%d", &n);
        prime(n);
    }
    return 0;
}
