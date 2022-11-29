#include<stdio.h>
void safe_rocks(int n, int arr[], int brr[])
{
    int i, j, flag = 0, mark[1000];
    for(i=1; i<=n; i++){
        for(j=i+1; j<=n; j++){
            if(arr[i] == arr[j] || brr[i] == brr[j]){
                mark[i] = 1;
                mark[j] = 1;
            }

        }
        if(mark[i] == 0)
            flag++;
    }

    printf("Safe rooks = %d\n", flag);
    for(i=1; i<=n; i++){
        if(mark[i] == 0)
            printf("%d %d\n", arr[i], brr[i]);
    }
    printf("\n");

}


int main()
{
    int n, arr[10005], brr[10005], i,  x, y;
    scanf("%d", &n);

    for(i=1; i<=n; i++){
        scanf("%d%d", &x, &y);

        arr[i] = x;
        brr[i] = y;
    }

    safe_rocks(n, arr, brr);

    return 0;
}

