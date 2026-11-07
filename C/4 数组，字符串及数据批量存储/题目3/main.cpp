#include <stdio.h>
int main()
{
    int n,k,m;
    int res=0;
    scanf("%d %d %d",&n,&k,&m);
    for(int i=2;i<=n;i++)
    {
        res=(res+m)%i;
    }
    res=(res+k)%n;
    printf("%d\n",res);
    return 0;
}
