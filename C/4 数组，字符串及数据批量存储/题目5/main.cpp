#include <stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a[100];
    for(int i=0;i<=n;i++)
    {    
    scanf("%d",&a[i]);
    }
    int last=a[n-1];
    if(last==0)
    {
        printf("UP\n");
    }else if(last==15)
    {
        printf("DOWN\n");
    }else 
    {
        if(n==1){
            printf("-1\n");
        }else
        { int prev=a[n-2];
        if(last>prev){
            printf("UP\n");
        }if(last<prev){
            printf("DOWN\n");
        }
      }
    }
    return 0;
}
