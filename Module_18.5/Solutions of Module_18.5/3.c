#include<stdio.h>
int main()
{
    int n, i, sum=0;
    scanf("%d", &n);
    int arr[n+5];
    for(i=0; i<n; i++){
        scanf("%d", &arr[i]);
    }
    for(i=0; i<n; i++){
        sum = sum + arr[i]%10;
    }
    printf("%d", sum);
    printf("\n");
    return 0;
}


