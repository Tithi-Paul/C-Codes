#include<stdio.h>
int main()

{
    int n, m, i;
    scanf("%d%d", &n, &m);
    if(n>m){
        m += 24;
    }
    for(i=n; i<=m; i++){
        printf("%d ", i%24);
    }
    printf("\n");
    return 0;
}

///1 2 3 4 5
/// cur = 5
/// 5+3 = 3
///2+3 = 5
///1 2 3 4 5 1 2 3 4 5
