#include<stdio.h>
int main()
{
    int i, flag=0, len;
    char str[100];
    scanf("%s", str);
    //getchar();
    //printf("%s", str);

    len = strlen(str);

    for(i=0; i<len/2; i++){
        if(str[i] != str[len-1-i]){
            flag = 1;
        }
    }
    if(flag == 0)
        printf("YES\n");
    else
        printf("NO\n");
    return 0;
}
