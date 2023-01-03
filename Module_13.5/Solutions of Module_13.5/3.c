#include<stdio.h>
int main()
{
    int i, vowel=0, len, conso=0;
    char str[100];
    scanf("%s", str);
    getchar();

    len = strlen(str);

    for(i=0; i<len; i++){
        if(str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u'){
            vowel++;
        }
        else
            conso++;
    }

    printf("Vowel - %d\n", vowel);
    printf("Consonant - %d\n", conso);
    return 0;
}

