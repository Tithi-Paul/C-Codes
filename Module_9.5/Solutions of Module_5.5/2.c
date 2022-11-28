#include<stdio.h>

int main()
{
    int n, i, Q, val, index;
    scanf("%d", &n);
    int arr[n+5];
    for(i=0; i<n; i++){
        scanf("%d", &arr[i]);
    }
    scanf("%d", &Q);
    while(Q--){
        scanf("%d%d", &index, &val);
            arr[index] = arr[index] + val;
    }
    for(i=0; i<n; i++){
        printf("%d ", arr[i]);
    }
    return 0;
}


