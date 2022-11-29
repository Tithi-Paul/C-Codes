#include<stdio.h>

int Min(int a, int b)
{
    if (a > b) {
        return b;
    }
    return a;
}

int Max(int a, int b)
{
    if(a > b) {
        return a;
    }
    return b;
}

int main()
{
    int t;
    scanf("%d", &t);
    while(t--){
        int p, q, r, a, b, c;
        scanf("%d%d%d",&a,&b,&c);
        p = a;
        q = b;
        r = c;
        a = Min(p,q);
        b = Max(p,q);
        p = a;
        q = b;
        b = Min(q,r);
        c = Max(q,r);
        q = b;
        r = c;
        a = Min(p,q);
        b = Max(p,q);
        p = a;
        q = b;
        printf("%d\n",q);

    }

}
