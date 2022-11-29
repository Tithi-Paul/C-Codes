#include<stdio.h>
#include<string.h>
char ans[1000], res[1000], sp[10] = " ";
int k=0;

void sum_str(int len, char str[])
{
    int i, j;
    //strcat(str, sp);
    //strcat(res, str);
    //len = strlen(str);
    if(k>0){
        ans[k] = ' ';
        k++;
    }
    for(j=0; j<len; j++){
        ans[k] = str[j];
        k++;
    }

}

int main()
{
    int n, i, p, len, j;
    scanf("%d", &n);
    char str[100];
    for(i=0; i<n; i++){
        scanf("%s", str);
        len = strlen(str);
    sum_str(len, str);
    //printf("%s ", ans);
    }


    ans[k]= '\0';
    printf("%s ", ans);
    printf("\n");
    //printf("%s ", res);
    return 0;

}


