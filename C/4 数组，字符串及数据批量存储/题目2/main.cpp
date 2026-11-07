#include <stdio.h>
int main()
{
    int n,x;
    scanf("%d %d",&n,&x);
    int cnt=0;
    for(int i=1;i<=n;i++)
    {
        int t=i;
        while(t>0)
        {
            if(t % 10==x)
            cnt++;
            t/=10;
        }
    }
    printf("%d\n",cnt);
    return 0;
}
