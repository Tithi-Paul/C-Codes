#include<stdio.h>
int main()
{
    int x, y;
    float sum;

    int *p = &x;
    int *q = &y;

    scanf("%d%d", &x, &y);

    sum = ((*p + *q)/2.0);
    printf("%f\n", sum);
    return 0;
}
