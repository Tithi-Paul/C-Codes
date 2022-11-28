#include<stdio.h>
int main()

{
    int n, m, i;
    scanf("%d%d", &n, &m);
    for(i=1; i<=n; i++){
        if(i%m == 0){
            printf("%d ", i);
        }
    }
    printf("\n");
    return 0;
}


