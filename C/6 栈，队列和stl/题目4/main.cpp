#include <stdio.h>
#include <string.h>
int main()
{
    int n;
    scanf("%d",&n);
    
    char str[25][25];
    for(int i=0;i<n;i++)
    {
        scanf("%s",str[i]);
    }
    for(int i=0;i<n-1;i++)
    {
        for(int j=0;j<n-1-i;j++)
        {
            char s1[50]="";
            char s2[50]="";
            
            strcat(s1,str[j]);
            strcat(s1,str[j+1]);
            
            strcat(s2,str[j+1]);
            strcat(s2,str[j]);
            
            if(strcmp(s2,s1)>0)
            {
                char temp[25];
                strcpy(temp,str[j]);
                strcpy(str[j],str[j+1]);
                strcpy(str[j+1],temp);
            }
        }
    }
    for(int i=0;i<n;i++)
    {
        printf("%s",str[i]);
    }
    printf("\n");
    return 0;
}
