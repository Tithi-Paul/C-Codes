#include<stdio.h>

float operation(char x, int y, int z)
{
    float ans;
    if(x == '+')
        ans = y+z;
    else if(x == '-')
        ans = y-z;
    else if(x == '*')
        ans = y*z;
    else if(x == '/')
        ans = y/z;

    return ans;

}


int main()
{
    int a, b, i;
    float ans=0;
    char p;
    scanf("%c", &p);
    scanf("%d%d", &a, &b);

    ans = operation(p, a, b);

    printf("%f", ans);
    printf("\n");
    return 0;
}



