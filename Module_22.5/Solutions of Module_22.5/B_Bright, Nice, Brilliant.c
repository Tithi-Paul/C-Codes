#include<stdio.h>
int main()
{
    int t;
    scanf("%d", &t);
    while(t--){
        int n, i, j;
        scanf("%d", &n);
        for(i=1;i<=n;i++){
            for(j=1;j<=i;j++){
                if(j>1 && j<i)
                    printf("0 ");
                else
                    printf("1 ");
            }
            printf("\n");
        }
    }
    return 0;
}
