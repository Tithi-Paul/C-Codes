#include<stdio.h>
int n, m;

void matrix_mul(int mat1[n][m], int mat2[n][m])
{
    int i, j, anss=0, k, ans[150][150];

    for(i=0; i<n; i++){
        for(j=0; j<m; j++){
            anss = 0;
            for(k=0; k<n; k++){
                anss += mat1[k][i]*mat2[j][k];
                ans[j][i] = anss;
            }
        }
    }
    printf("\n");
    for(i=0; i<n; i++){
        for(j=0; j<m; j++){
            printf("%d ", ans[i][j]);
        }
        printf("\n");
    }

}


int main()
{
    int i, j;
    scanf("%d%d", &n, &m);
    int mat1[n][m], mat2[n][m];
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

    matrix_mul(mat1, mat2);
    return 0;
}

