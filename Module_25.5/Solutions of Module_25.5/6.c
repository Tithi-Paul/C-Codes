#include<stdio.h>

int main()
{
    int a, b, c, ans;

    scanf("%d%d%d", &a, &b, &c);

    int *p = &a, *q = &b, *r = &c;

    ans = *p + *q + *r;

    printf("%d\n", ans);

    return 0;
}
