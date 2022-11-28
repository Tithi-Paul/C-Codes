#include<stdio.h>

int main()
{
    int a, b, c;
    scanf("%d%d%d", &a, &b, &c);

    if(a>b && a>c){
        printf("A is Bigger\n");
    }
    else if(a>b && a==c){
        printf("A & C both are Bigger\n");
    }
    else if(a>c && a==b){
        printf("A & B both are Bigger\n");
    }
    else if(b>a && b>c){
        printf("B is Bigger\n");
    }
    else if(b>a && b==c){
        printf("B and C both are Bigger\n");
    }
    else if(b>c && a==b){
        printf("A and B both are Bigger\n");
    }
    else if(a == b && b == c && c == a)
        printf("They are equal\n");

    else if(c>a && c>b)
        printf("C is Bigger\n");

    else if(c>b && a==c){
        printf("A & C both are Bigger\n");
    }
    else if(c>a && b==c){
        printf("B & C both are Bigger\n");
    }
    return 0;
}


