#include<stdio.h>

int main()
{
    int b,n,m,k[1000],u[1000];
    int i,j,z=-1;
    
    scanf("%d %d %d",&b,&n,&m);
    
    for(i=0;i<n;i++)
    {
        scanf("%d",&k[i]);
    }
    
    for(i=0;i<m;i++)
    {
        scanf("%d",&u[i]);
    }
    
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            if(k[i]+u[j]<=b&&k[i]+u[j]>z)
            z=k[i]+u[j];
        }
    }
    printf("%d",z);
}
