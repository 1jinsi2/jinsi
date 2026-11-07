#include <stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    
    long long a[106];
    for(int i=0;i<n;i++)
    {
        scanf("%lld",&a[i]);
    }
    int found=0;
    for(int i=0;i<n;i++)
    {
        for(int k=i+1;k<n;k++)
        {
            for(int j=k+1;j<n;j++)
            {
                if(a[i]+a[j]>a[k]&&a[i]+a[k]>a[j]&&a[j]+a[k]>a[i])
                {
                    printf("%lld %lld %lld",a[i],a[k],a[j]);
                    found=1;
                    break;
                }
            }
            if(found==1)break;
        }
        if(found==1)break;
    }
    if(found==0)
    {
        printf("No solution\n");
    }
    return 0;
}
