#include<stdio.h>
#include<string.h>

int jump[10][10] = {0};

void init_jump()
{
    jump[1][3] = 2; jump[3][1] = 2;
    jump[1][7] = 4; jump[7][1] = 4;
    jump[1][9] = 5; jump[9][1] = 5;
    jump[2][8] = 5; jump[8][2] = 5;
    jump[3][7] = 5; jump[7][3] = 5;
    jump[3][9] = 6; jump[9][3] = 6;
    jump[4][6] = 5; jump[6][4] = 5;
    jump[7][9] = 8; jump[9][7] = 8;
}

int main(void)
{
    init_jump();
    char s[40];
    
    while(scanf("%s", s) != EOF)
    {
        int vis[10] = {0}; 
        int ok = 1;
        int len = strlen(s);

        int cur = s[0] - '0';
        vis[cur] = 1;

        for(int i = 1; i < len; i++)
        {
            int next = s[i] - '0';
            if(vis[next])
            {
                ok = 0;
                break;
            }
            int mid = jump[cur][next];
            if(mid != 0 && vis[mid] == 0)
            {
                ok = 0;
                break;
            }
            vis[next] = 1;
            cur = next;
        }
        if(ok)
            printf("YES\n");
        else
            printf("NO\n");
    }
    return 0;
}

