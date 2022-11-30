#include<stdio.h>
int main()
{
    int i, len, flag =0;
    char str[100];
    scanf("%s", str);

    len = strlen(str);

    for(i=0; i<len; i++){
        if(str[i] != '0' && str[i]!= '1')
            flag++;
    }

    if(flag == 0)
        printf("YES\n");
    else
        printf("NO\n");

    return 0;
}


