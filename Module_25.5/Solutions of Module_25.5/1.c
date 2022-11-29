#include<stdio.h>

void not_equal(int n, int arr[], int k)
{
    int i, flag =0;
    for(i=0; i<n; i++){
        if(arr[i] > k || arr[i] < k)
            flag++;
    }
    printf("%d\n", flag);
}

int main()
{
    int n, k, i;
    scanf("%d", &n);
    int arr[n+5];
    for(i=0; i<n; i++){
        scanf("%d", &arr[i]);
    }
    scanf("%d", &k);
    not_equal(n, arr, k);
    return 0;
}
