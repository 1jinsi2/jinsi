#include <stdio.h>
int main()
{
    long long x,y,z;
    scanf("%lld %lld",&x,&y);
    if(y%x==0){
        z=x+y;
        printf("%lld",z);
    }else{
        z=y-x;
        printf("%lld",z);
    }
    return 0;
}
