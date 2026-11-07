#include<stdio.h>
#include<string.h>
int main()
{
    char a[50000]={0},b[100]={0},c;
    int i,j;
    for(i=0;scanf("%s",b)!=EOF;i++)
    {
        strcat(a,b);
        scanf("%c",&c);
        a[strlen(a)]=c;
    }
    int n=strlen(a),doudou=0;
    for(i=0;i<n;i++){
        if(a[i]=='"'&&a[i-1]!='\\')
        {
            if(doudou==0)
            {
            doudou=1;
            }
            else
            {
                doudou=0;
             }
        }
        if((a[i]!='/'||a[i+1]!='*')||doudou==1)
        {
            printf("%c",a[i]);
        }
        else
        {
            for(j=i+2;j<n;j++)
            {
                if(a[j]=='*'&&a[j+1]=='/')
                {
                    i=j+1;
                    break;
                }
            }
            if(j==n)
            {
                printf("%c",a[i]);     
                }
            }
        }  
}
