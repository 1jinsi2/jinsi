#include <stdio.h>
#include <string.h>
int main()
{
    char s[100006];
    scanf("%s",s);
    
    int len=strlen(s);
    int balance=0;
    int is_good=1;
    
    for(int i=0;i<len;i++)
    {
        if(s[i]=='a')
        {
            balance++;
        }else if(s[i]=='b')
        {
            balance--;
            if(balance<0)
            {
                is_good=0;
                break;
            }
        }else{
            is_good=0;
            break;
        }
        
    }
    if(balance!=0){
        is_good=0;
    }
    if(is_good==1){
        printf("Good\n");
    }else{
        printf("Bad\n");
    }
    return 0;
}
