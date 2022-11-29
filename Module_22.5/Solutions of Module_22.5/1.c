#include<stdio.h>

int is_binary(int len, char str[])
{
    int i, flag=0;
    for(i=0; i<len; i++){
        if(str[i] != '0' && str[i]!= '1')
            flag++;
    }
    if(flag == 0)
        return 1;
    else
        return 2;
}

int main()
{
    int i, len, flag =0;
    char str[100];
    scanf("%s", str);

    len = strlen(str);

    is_binary(len, str);

    if(is_binary(len, str) == 1)
        printf("YES\n");
    else
        printf("NO\n");

    return 0;


}
