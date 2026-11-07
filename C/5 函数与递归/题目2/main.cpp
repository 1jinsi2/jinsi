#include <stdio.h>
 int isLeapYear(int y)
 {
     if((y%4==0&&y%100!=0)||(y%400==0))
     {
         return 1;
     }
     return 0;
 }
 int getDays(int y,int m)
 {
     int days[]={0,31,28,31,30,31,30,31,31,30,31,30,31};
     if(m==2&& isLeapYear(y))
     {
         return 29;
     }
     return days[m];
 }
int main()
{
    int y,m,x;
    
    while (scanf("%d %d %d",&y,&m,&x)!=EOF)
    {
        int days=getDays(y,m);
        int ans=0;
        
        if(y/1000==x)ans++;
        if((y/100)%10==x)ans++;
        if((y/10)%10==x)ans++;
        if(y%10==x)ans++;
        
        if(m/10==x)ans++;
        if(m%10==x)ans++;
        
        ans=ans*days;
        
        for(int i=1;i<=days;i++)
        {
            if(i/10==x)ans++;
            if(i%10==x)ans++;
        }
        printf("%d\n",ans);
    }
    return 0;
}
