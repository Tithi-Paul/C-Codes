#include<stdio.h>
int main()
{
    int n, m, p, q, i, j, arr[100][100], ans[100][100];
    scanf("%d%d", &n, &m);

    for(i=1; i<=n; i++){
        for(j=1; j<=m; j++){
            scanf("%d", &arr[i][j]);
        }
    }

    for(i=1; i<=n; i++){
        for(j=1; j<=m; j++){
            ans[i][j] = arr[j][i];
        }
    }
    for(i=1; i<=n; i++){
        for(j=1; j<=m; j++){
            printf("%d ", ans[i][j]);
        }
        printf("\n");
    }
    return 0;
}


