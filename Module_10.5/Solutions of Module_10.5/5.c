#include<stdio.h>
int main()
{
    int n, i,j, k=0, sum;
    scanf("%d", &n);
    int arr[n+5], ans[n+5];
    for(i=0; i<n; i++){
        scanf("%d", &arr[i]);
    }
    for(i=0; i<n; i++){
        sum = 0;
        for(j=2; j<=(arr[i]/2); j++){
            if(arr[i]%j == 0){
                sum++;
            }
        }
        if(sum == 0){
            ans[k] = arr[i];
            k++;
        }

    }
    printf("%d\n", k);
    for(i=0; i<k; i++){
        printf("%d ", ans[i]);
    }

    return 0;
}


