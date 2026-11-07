#include <stdio.h>
#include <string.h>
int isPrime(long long n)
{
    if(n<=1)return 0;
    
    for (long long i=2;i*i<=n;i++)
    {
        if(n%i==0)
        {
            return 0;
        }
    }return 1;
}
int main()
{
    char s[25];
    scanf("%s",s);
    
    int len=strlen(s);
    for(int i=0;i<len-1;i++)
    {
        s[len+i]=s[len-2-i];
    }
    s[2*len-1]='\0';
    
    long long num=0;
    for(int i=0;s[i]!='\0';i++)
    {
        num=num*10+(s[i]-'0');
    }
    
    if(isPrime(num)==1)
    {
        printf("prime\n");
    }else{
        printf("noprime\n");
    }
    return 0;
    
    

}
