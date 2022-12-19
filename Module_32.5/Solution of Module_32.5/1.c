#include<stdio.h>
void pow(int n, int m, int i, int res)
{
    if(i>m){
        printf("%d\n", res);
        return;
    }

    res = res * n;
    i++;
    pow(n, m, i, res);

}
int main()
{
    int n, m, i, ans=1;
    scanf("%d%d", &n, &m);
    pow(n, m, 1, ans);
    return 0;
}

