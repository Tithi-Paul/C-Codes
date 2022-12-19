#include<stdio.h>
int arr[1000];
int sum_last_digit(int i, int n)
{
    int digit;
    if(i>n)
        return 0;
    digit = arr[i]%10;
    return digit + sum_last_digit(i+1, n);

}
int main()
{
    int n, i,  ans;
    scanf("%d", &n);
    for(i=1; i<=n; i++){
        scanf("%d", &arr[i]);
    }

    ans = sum_last_digit(1, n);
    printf("%d\n", ans);
    return 0;
}

