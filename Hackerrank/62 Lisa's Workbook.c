#include<stdio.h>

int main()
{
    int n,Ar[1000],i,j,k;
    int page=1,count=0;
    
    scanf("%d %d",&n,&k);
    for(i=1;i<=n;i++)
    {
        scanf("%d",&Ar[i]);
    }
    
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=Ar[i];j++)
        {
            if(j==page)
            {
                count++;
                continue;
            }
            page=page+1;
            
        }
        
    }
    printf("%d",count);
}
