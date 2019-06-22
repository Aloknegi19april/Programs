#include<stdio.h>

int main()
{
    int n,p,i,count=0,count1=0;
    scanf("%d",&n);
    scanf("%d",&p);
    
    for(i=1;i<=n;i+2)
    {
        if(i>=p)
        {
            break;
        }
        count++;
    }
    
    for(i=n;i>=1;i-2)
    {
        if(i<=p)
        {
            break;
        }
        count1++;
    }
    count1--;
    if(count<=count1)
    {
        printf("%d",count);
    }
    else
    {
        printf("%d",count1);
    }
}
