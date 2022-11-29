#include<stdio.h>
void sort_arr(int n, int arr[])
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
    for(i=0; i<n; i++){
        printf("%d ", arr[i]);
    }
    printf("\n");

}
int main()
{
    int n, ans1, ans2, i, k;

    scanf("%d", &n);

    int arr[1005];
    for(i=0; i<n; i++){
        scanf("%d", &arr[i]);
    }

    sort_arr(n, arr);

    return 0;
}
