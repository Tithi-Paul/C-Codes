#include<stdio.h>

int main()
{
    int n, i, j, k, flag, prm, cont=0, p, q, arr[1000];
    scanf("%d", &n);

    k = (n*(n+1))/2;


    for(i=2; k > cont; i++){
        flag = 0;
        for(j=2; j<=i/2; j++){
            if(i%j==0)
                flag = 1;

        }
        if(flag == 0){
            prm = i;
            arr[cont] = prm;
            cont++;
        }
    }
    cont = 0 ;
    int row = 1;
    int trg = 1;
    for(p=0; p<k; p++){
        printf("%d ", arr[p]);
        cont++;
        if(cont == trg){
            printf("\n");
            row++;
            trg = trg+row;

        }

    }
    return 0;
}
