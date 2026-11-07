#include <stdio.h>
int main()
{
    int x,y;
    int sum=0;
    int count=0;
    scanf("%d %d",&x,&y);
    
    for(int i=x;i<=y;i++)
    {
        sum=0;
        int t=i;
        while(t>0)
        {
            sum+=t%10;
            t/=10;
        }
        if(sum%5==0)
        {
            count++;
        }
    }
        printf("%d",count);
    
    return 0;
}
