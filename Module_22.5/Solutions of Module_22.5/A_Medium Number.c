#include<stdio.h>
int medium(int a, int b, int c)
{
    if((b>a && c>b) || (b>c && a>b))
        return b;
    else if((a>b && c>a) || (a>c && b>a))
        return a;
    else if((c>a && b>c) || (c>b && a>c))
        return c;
}

int main()
{
    int t;
    scanf("%d", &t);
    while(t--){
        int a, b, c, ans;
        scanf("%d%d%d", &a, &b, &c);

        ans = medium(a, b, c);
        printf("%d\n", ans);
    }
}
