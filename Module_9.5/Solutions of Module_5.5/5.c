#include<stdio.h>

int main()
{
    int n, i, val, j, cont = 0, target;
    scanf("%d", &n);
    int arr[n+5];
    for(i=0; i<n; i++){
        scanf("%d", &arr[i]);
    }
    scanf("%d", &target);
    for(i=0; i<n-1; i++){
        arr[i] + arr[i+1] = val;
        //for(j=0; j<n; j++){
            if(val == target)
                cont++;
        //}
    }
    if(cont > 0)
        printf("YES\n");
    else
        printf("NO\n");
    return 0;
}



