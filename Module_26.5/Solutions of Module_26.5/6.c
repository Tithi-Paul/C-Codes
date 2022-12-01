#include<stdio.h>

void Up_string(int n, char str[])
{
    int i;
    for(i=0; i<n; i++){
        if(((int)(str[i]))%2 == 0){
            str[i] = str[i]-32;
        }
    }

    printf("%s\n", str);
}

int main()
{
    int n;
    char str[1000];
    scanf("%s", str);

    n = strlen(str);


    Up_string(n, str);

    return 0;
}

