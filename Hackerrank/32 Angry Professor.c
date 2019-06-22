#include<stdio.h>

int main()
{
    int t,n,k,i,c=0,j;
    int Ar[]={13, 91, 56, -62, 96 ,-5, -84, -36, -46, -13};
    
        scanf("%d",&k);
        
        for(j=0;j<10;j++)
        {
            if(Ar[j]<=0)
            {
                c++;
            }
        }
        if(c<=k)
        {
            printf("YES\n");
        }
        else
        {
            printf("NO");    
        }
    
}
