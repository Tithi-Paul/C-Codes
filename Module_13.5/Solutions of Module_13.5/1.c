#include<stdio.h>
#include<string.h>
int main()
{

    char s[100];
    int arr[27], n, i, j=0, ix, mx;
    scanf("%s", s);
    for(i = 0; i < 26; i++) {
        arr[i] = 0;
    }

    n = strlen(s);
    for(i = 0; i < n; i++) {
        ix = s[i] - 'a';
        arr[ix]++;
    }

    //for(int i = 0; i < 26; i++) {
        //printf("%c - %d\n", (char)i+'a', arr[i]);
    //}
    while(j < n) {
        mx = 0;
        for(i = 0; i < 26; i++) {
            if(arr[i] > mx) {
                mx = arr[i];
                ix = i;
            }
        }

        while(mx--) {
            s[j] = (char)(ix + 'a');
            j++;
        }
        arr[ix] = 0;
    }
    printf("%s\n",s);
    return 0;
}
