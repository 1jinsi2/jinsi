#include <stdio.h>
#include <stdlib.h>
struct choco{
    long long a;
    long long b;
    long long diff;
};
 int cmp(const void*p1,const void*p2){
    struct choco*c1=(struct choco*)p1;
    struct choco*c2=(struct choco*)p2;
    
    if(c1->diff<c2->diff) return 1;
    if(c1->diff>c2->diff) return -1;
    return 0;
}
int main()
{
    long long n,k;
    if(scanf("%lld %lld",&n,&k)!=2)return 0;
    
    struct choco chocos[100005];
    for(int i=0;i<n;i++){
       scanf("%lld",&chocos[i].a); 
    }
    for(int i=0;i<n;i++)
    {
        scanf("%lld",&chocos[i].b);
        chocos[i].diff=chocos[i].a-chocos[i].b;
    }
    qsort(chocos,n,sizeof(struct choco),cmp);
    
    long long total_sweet=0;
    for(int i=0;i<n;i++)
    {
        if(i<k)
        {
            total_sweet+=chocos[i].a;
        }else{
            total_sweet+=chocos[i].b;
        }
    }
    printf("%lld\n",total_sweet);
    return 0;
}

