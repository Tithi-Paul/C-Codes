#include<stdio.h>
int pow(int n, int m)
{
    if(m==0){
        return 1;
    }
    return n * pow(n, --m);

}
int main()
{
    int n, m, ans;
    scanf("%d%d", &n, &m);
    ans = pow(n, m);
    printf("%d\n", ans);
    return 0;
}


