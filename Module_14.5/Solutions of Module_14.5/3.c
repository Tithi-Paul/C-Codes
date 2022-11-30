#include<stdio.h>
int main()
{
    int i, len, arr[1000], ans=0, flag=9999, result;
    char str[100];
    scanf("%s", str);
    len = strlen(str);
    for(i=0; i<len; i++){
        arr[i] = (int)(str[i]-96);
    }
    for(i=0; i<len; i++){
        ans = ans + arr[i];
    }
    result = 1;
    while(1){
        if(result == ans){
            flag = 1;
            break;
        }
        else if(result > ans){
            flag = 0;
            break;
        }
    result = result *2;
    }
    if(flag == 1){
         printf("YES\n");
    }
    else if(flag == 0)
        printf("NO\n");
    return 0;
}



