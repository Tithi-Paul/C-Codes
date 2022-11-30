#include<stdio.h>
int main()
{
    int n, m, i, j, k, anss=0;
    scanf("%d%d", &n, &m);
    int mat1[100][100], mat2[100][100], ans[150][150];
    for(i=0; i<n; i++){
        for(j=0; j<m; j++){
            scanf("%d", &mat1[i][j]);
        }
    }

     for(i=0; i<n; i++){
        for(j=0; j<m; j++){
            scanf("%d", &mat2[i][j]);
        }
    }

    for(i=0; i<n; i++){
        //anss = 0;
        for(j=0; j<m; j++){
            anss = 0;
            for(k=0; k<n; k++){
               // anss = 0;
                anss += mat1[k][i]*mat2[j][k];
                ans[j][i] = anss;
                //printf("%d*%d ", mat1[j][k], mat2[k][j]);
            }
            //printf("\n");
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
