#include<stdio.h>
int main()
{
    int T;
    scanf("%d",&T);
    int n;
    int y=1;
    while(y<=T)
    {
        scanf("%d",&n);
        n=(n+1)/2;
        for(int i=1;i<=n;i++)
        {
            for(int j=1;j<=n-i;j++)
                printf(" ");
            for(int k=1;k<=2*i-1;k++)
                printf("*");
            printf("\n");
        }
        for(int i=1;i<=n-1;i++)
        {
            for(int j=1;j<=i;j++)
                printf(" ");
            for(int k=1;k<=2*n-i*2-1;k++)
                printf("*");
            printf("\n");
        }
        y++;
    }
    return 0;
}

