#include <stdio.h>
int main()
{
    int L,R;
    int sum=0;
    scanf("%d %d",&L,&R);
    
    for(int i=L;i<=R;i++)
    {
        int a=i;
        while(a>0)
        {
            if(a%10==2)
            {
                sum++;
            }
            a/=10;
        }
    }
    printf("%d\n",sum);
    return 0;
}
