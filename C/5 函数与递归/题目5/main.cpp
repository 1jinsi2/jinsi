#include <stdio.h>
#include <string.h>
int main()
{
   int T;
   char a[55],b[55];
   scanf("%d",&T);
   
   while(T--)
   {
   scanf("%s %s",a,b);
   int n=strlen(a);
   int m=strlen(b);
   int c[100]={0};
   
   for(int i=n-1;i>=0;i--)
   {
   int carry=0;
   for(int j=m-1;j>=0;j--)
   {
   int sum=c[i+j+1]+(a[i]-'0')*(b[j]-'0')+carry;
   c[i+j+1]=sum%10;
   carry=sum/10;
   }
   c[i]+=carry;
   }
   int k=0;
   while(k<n+m-1&&c[k]==0)
   {
   k++;
   }
   for(;k<n+m;k++)
   {
   printf("%d",c[k]);
   }
   printf("\n");
   }
   return 0;
}
