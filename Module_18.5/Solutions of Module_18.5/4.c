#include<stdio.h>
int main()
{
    int n, i, k=0;
    char str[105], ans[100];
    scanf("%s", str);
    n = strlen(str);
    for(i=0; i<n; i++){
        if(str[i] != str[i+1]){
            ans[k] = str[i];
            k++;
        }
    }
    ans[k] = '\0';
    printf("%s", ans);
    printf("\n");
    return 0;
}



