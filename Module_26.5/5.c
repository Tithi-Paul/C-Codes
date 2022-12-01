#include<stdio.h>

int sum_of_array(int n, int arr[])
{
    int i, sum=0;
    for(i=0; i<n; i++){
        if(arr[i]%10 == 0){
            sum = sum+arr[i];
        }
    }

    return sum;
}

int main()
{
    int n, ans, i;
    scanf("%d", &n);
    int arr[n+5];
    for(i=0; i<n; i++){
        scanf("%d", &arr[i]);
    }

    ans = sum_of_array(n, arr);
    printf("%d\n", ans);
    return 0;
}

