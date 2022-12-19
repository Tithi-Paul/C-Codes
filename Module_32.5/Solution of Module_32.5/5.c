#include<stdio.h>
int print(int i, int n)
{
    if(i>n)
        return 0;
    return i + print(i+1, n);

}
int main()
{
    int n, i, sum=0;
    scanf("%d", &n);
    sum = print(1, n);
    printf("%d", sum);
    return 0;
}

