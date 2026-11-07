#include <stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int y;
    if(n%2==1){
        y=3*n+1;
    }else{
        y=n/2;
    }
    printf("%d",y);
    return 0;
}
