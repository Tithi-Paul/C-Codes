#include<stdio.h>

int sort_arr(int n, int arr[])
{
    int i, j, temp=0;
    for(i=0; i<n; i++){
        for(j=0; j<n-i-1; j++){
            if(arr[j] > arr[j+1]){
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
    return arr;

}

int largest(int n, int arr[], int k)
{
    int large;
    sort_arr(n, arr);

    large = arr[n-k];
    return large;
}

int smallest(int n, int arr[], int k)
{
    int small;
    sort_arr(n, arr);

    small = arr[k-1];
    return small;

}

int main()
{
    int n, ans1, ans2, i, k;

    scanf("%d", &n);

    int arr[1005];
    for(i=0; i<n; i++){
        scanf("%d", &arr[i]);
    }
    scanf("%d", &k);
    ans1 = largest(n, arr, k);
    ans2 = smallest(n, arr, k);

    printf("largest element %d\n", ans1);
    printf("smallest element %d\n", ans2);

    return 0;
}


