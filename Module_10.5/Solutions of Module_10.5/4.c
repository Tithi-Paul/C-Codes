#include<stdio.h>
int main()
{
    int n, p, i, max, temp=0;
    scanf("%d", &n);
    int arr[n+5];
    for(i=0; i<n; i++){
        scanf("%d", &arr[i]);
    }
    scanf("%d", &p);
    for(int i = 0; i < n; i++) {
        for(int j = i+1; j < n; j++) {
            if(arr[i] > arr[j]) {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    //for(i=0; i<n; i++){
        printf("%d ", arr[p-1]);
    //}
    return 0;
}

