#include<stdio.h>
int main()
{
    int n, p, q, i, j, arr[4][4];
    scanf("%d", &n);
    for(i=1; i<=n; i++){
        for(j=1; j<=n; j++)
            arr[i][j]=0;
    }
    for(i=1; i<=n; i++){
        scanf("%d%d", &p, &q);
        arr[p][q]=1;
    }
    printf("Total empty cells - %d\n", 9-n);
    for(i=1; i<=3; i++){
        for(j=1; j<=3; j++){
            if(arr[i][j] == 0){
                printf("%d %d\n", i, j);
            }
        }
    }
    return 0;
}

