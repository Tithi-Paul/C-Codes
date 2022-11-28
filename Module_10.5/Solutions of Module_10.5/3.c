#include<stdio.h>
int main()
{
    int n, i, sum = 0;
    scanf("%d", &n);
    int arr[n+5];
    for(i=0; i<n; i++){
        scanf("%d", &arr[i]);
    }
    for(i=0; i<n; i++){
        if(arr[i]%2 != 0){
            sum = sum + arr[i];
        }
    }
    if(sum%2 == 0)
        printf("YES\n");
    else
        printf("NO\n");

    return 0;
}

