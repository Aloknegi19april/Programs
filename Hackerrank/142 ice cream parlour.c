#include<stdio.h>
int main()
{
    int t,m,n,cost[10000],i,j;
    int k,l,c=0;
    scanf("%d",&t);
    for(i=1;i<=t;i++)
    {
        c=0;
        scanf("%d",&m);
        scanf("%d",&n);
        for(j=1;j<=n;j++)
        {
            scanf("%d",&cost[j]);
        }
        for(k=1;k<=n;k++)
        {
            for(l=1;l<=n;l++)
            {
                if(k!=l)
                {
                    if(cost[k]+cost[l]==m)
                    {
                        printf("%d %d\n",k,l);
                        c++;
                    }
                }
            }
            if(c>=1)
            {
                break;
            }
        }
    }
}