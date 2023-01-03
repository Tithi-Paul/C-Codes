#include<stdio.h>
int main()
{
    int n, m, i, j, arr[100][100], a[50][50], ans[150][150];
    scanf("%d%d", &n, &m);
    for(i=0; i<n; i++){
        for(j=0; j<m; j++){
            scanf("%d", &arr[i][j]);
            //scanf("%d", &a[i][j]);
        }
    }
    for(i=0; i<n; i++){
        for(j=0; j<m; j++){
            //scanf("%d", &arr[i][j]);
            scanf("%d", &a[i][j]);
        }
    }
    for(i=0; i<n; i++){
        for(j=0; j<m; j++){
            ans[i][j] = arr[i][j]+a[i][j];
        }
    }

    for(i=0; i<n; i++){
        for(j=0; j<m; j++){
            printf("%d ", ans[i][j]);
        }
        printf("\n");
    }
    return 0;
}
