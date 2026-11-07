#include <stdio.h>
int main()
{
    int L,M;
    scanf("%d %d",&L,&M);
    int tree[10006];
    for(int i=0;i<=L;i++)
    {
        tree[i]=1;
    }
    for(int i=0;i<M;i++)
    {
        int l,r;
        scanf("%d %d",&l,&r);
        for(int j=l;j<=r;j++)
        {
            tree[j]=0;
        }
    }
    int cnt=0;
    for(int i=0;i<=L;i++)
    {
       if(tree[i]==1)
       {
           cnt++;
       }
    }
    printf("%d",cnt);
    return 0;
}
