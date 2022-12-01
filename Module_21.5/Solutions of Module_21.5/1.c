#include<stdio.h>

void func(int n)
{
    int i;
    if(n>0){
        for(i=n; i>= (-1*n); i--){
            printf("%d ", i);
        }
    }
    else{
        for(i=n; i<= (-1*n); i++){
            printf("%d ", i);
        }
    }
}

int main()
{
    int n;
    scanf("%d", &n);

    func(n);

    printf("\n");
    return 0;
}

