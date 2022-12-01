#include<stdio.h>

float area_of_circle(float r)
{
    float area;
    area = 3.1416*r*r;

    return area;
}

int main()
{
    float r, ans;

    scanf("%f", &r);

    ans = area_of_circle(r);
    printf("%f\n", ans);
    return 0;
}

