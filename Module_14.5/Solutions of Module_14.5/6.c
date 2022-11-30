#include<stdio.h>
int main()
{
    int n, i, j, arr[105][105];
    scanf("%d", &n);
    for(i=1; i<=n; i++){
        for(j=1; j<=n; j++){
            scanf("%d", &arr[i][j]);
        }
    }

    for(i = 1; i <= n; i++){
        printf("row %d and column %d -> ", i,i);
        for(j = 1; j <= n; j++) {
            if (i != j)
                printf("%d ",arr[i][j]);
        }
        for(j = 1; j <= n; j++){
            if (i != j)
                printf("%d ",arr[j][i]);
      }
      printf("\n");
    }
    return 0;
}
