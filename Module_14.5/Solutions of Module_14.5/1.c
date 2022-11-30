#include<stdio.h>
int main()
{
    int n, i, p, len, k=0, j;
    scanf("%d", &n);
    char str[100],ans[1000];
    for(i=0; i<n; i++){
        scanf("%s", str);
        len = strlen(str);
        if(i>0){
            ans[k] = ' ';
            k++;
        }
        for(j=0; j<len; j++){
            ans[k] = str[j];
            k++;
        }


    }
    ans[k]= '\0';
    printf("%s ", ans);
    printf("\n");

    return 0;
}

