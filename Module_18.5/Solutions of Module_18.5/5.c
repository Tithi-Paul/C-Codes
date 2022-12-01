#include<stdio.h>
int main()
{
    int a, b, i, ans=0;
    char p;
    scanf("%c", &p);
    scanf("%d%d", &a, &b);

    if(p == '+')
        ans = a+b;
    else if(p == '-')
        ans = a-b;
    else if(p == '*')
        ans = a*b;
    else if(p == '/')
        ans = a/b;

    printf("%d", ans);
    printf("\n");
    return 0;
}



