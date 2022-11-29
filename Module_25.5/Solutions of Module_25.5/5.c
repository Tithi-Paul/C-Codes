#include<stdio.h>

int fun(int n)
{
    if(n==1)
        return n;

    return n + fun(n-1);

}

int main()
{
    int n, ans;

    scanf("%d", &n);

    ans = fun(n);

    printf("%d\n", ans);

    return 0;
}

