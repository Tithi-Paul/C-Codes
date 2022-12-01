#include<stdio.h>

void func(int n)
{

    int i;

    for(i=2; i<=n; i+=2)
    {
        if(i%2 == 0)
            printf("%d ", i);
    }
}
int main()
{
    int n;
    scanf("%d", &n);

    func(n);

    return 0;
}


