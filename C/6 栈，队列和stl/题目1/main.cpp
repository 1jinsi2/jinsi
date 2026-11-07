#include <stdio.h>
int a[10];
int used[10];
void dfs(int k)
{
    if(k==9)
    {
        for(int i=1;i<=8;i++)
        {
            printf("%d",a[i]);
            if(i<8)
            {
                printf(" ");
            }
        }
        printf("\n");
        return;
    }
    for(int i=1;i<=8;i++)
    {
        if(used[i]==0)
        {
            a[k]=i;
            used[i]=1;
            dfs(k+1);
            used[i]=0;
        }
    }
}
int main()
{
    dfs(1);
    return 0;
}

