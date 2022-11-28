#include<stdio.h>

int main()
{
    int n, i, val, j;
    scanf("%d", &n);
    int arr[n+5];
    for(i=0; i<n; i++){
        scanf("%d", &arr[i]);
    }

    for(i=0; i<n; i++){
        val = arr[i];
        printf("%d - ", val);
        for(j=0; j<n; j++){
            if(i != j)
                printf("%d ", arr[j]);
        }
        printf("\n");
    }
    return 0;
}


