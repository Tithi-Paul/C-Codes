#include<stdio.h>

int sum(int n)
{
    int sum1=0, sum2=0, ans;

    sum1 += n%10;
    sum2 += n/1000;

    ans = sum1 + sum2;
    return ans;
}


int main()
{
    int n, ans=0, a, i;
    scanf("%d", &n);
    for(i=0; i<n; i++){
        scanf("%d", &a);
        ans += sum(a);
    }
    printf("%d", ans);
    return 0;
}
