#include<stdio.h>

int sum_alphabet(int len, char str[])
{

    int i, result, arr[1000], flag=9999, ans=0;
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
         return 1;
    }
    else if(flag == 0)
        return 0;
}

int main()
{
    int i, len, sum, result;
    char str[100];
    scanf("%s", str);
    len = strlen(str);

    sum = sum_alphabet(len,str);


    if(sum == 1){
         printf("YES\n");
    }
    else if(sum == 0)
        printf("NO\n");
    return 0;
}




