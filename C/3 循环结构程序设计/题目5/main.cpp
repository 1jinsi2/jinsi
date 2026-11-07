#include <stdio.h>
int main()
{
    int n;
    while (scanf("%d",&n)!=EOF)
    {
        for(int i=0;i<=n;i++)
        {
            for(int j=0;j<2*n-2*i;j++)
            {
                printf(" ");
            }for(int k=0;k<i+1;k++)
            {
                printf("*");
            }
            printf("\n");
        }
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<2+2*i;j++)
            {
                printf(" ");
            }for(int k=0;k<n-i;k++)
            {
                printf("*");
            }
            printf("\n");
        }
    }
    return 0;
}
