#include <stdio.h>
int main()
{
    char c;
    scanf("%c",&c);
    for(int i=0;i<=(int)(c-'A');i++)
    {
        for(int k=0;k<(int)(c-'A')-i;k++)
        {
            printf(" ");
        }for(int j=0;j<(i+1);j++)
        {
            printf("%c",'A'+j);
        }for(int h=1;h<=i;h++)
        {
            printf("%c",'A'+i-h);
        }
        printf("\n");
    }
    return 0;
}
