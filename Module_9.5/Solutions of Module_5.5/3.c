#include<stdio.h>

int main()
{
    int n, i, val, cont=0;
    scanf("%d", &n);
    int arr[n+5];
    for(i=0; i<n; i++){
        scanf("%d", &arr[i]);
    }
    val = arr[0];
    for(i=0; i<n; i++){
        if(val == arr[i])
            cont = cont + 0;
        else
            cont += 1;
    }
    if(cont == 0)
        printf("YES\n");
    else
        printf("NO\n");
    return 0;
}

