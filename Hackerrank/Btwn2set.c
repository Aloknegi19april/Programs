#include<stdio.h>
int main()
{
    int i,n,m,Ar1[10],Ar2[10];
    int j,count=0,temp,min;
    int Ar3[10];
    scanf("%d %d",&n,&m);
    for(i=0;i<n;i++)
    {
        scanf("%d",&Ar1[i]);
    }
    for(i=0;i<m;i++)
    {
        scanf("%d",&Ar2[i]);
    }
    for(i=0;i<n-1;i++)
    {
        min=i;
        for(j=i+1;j<n;j++)
        {
            if(Ar1[j]<Ar1[min])
            {
                min=j;
            }
        }
        temp=Ar1[i];
        Ar1[i]=Ar1[min];
        Ar1[min]=temp;
        
    }
    
      for(i=0;i<m-1;i++)
    {
        min=i;
        for(j=i+1;j<m;j++)
        {
            if(Ar2[j]<Ar2[min])
            {
                min=j;
            }
        }
        temp=Ar2[i];
        Ar2[i]=Ar2[min];
        Ar2[min]=temp;
        
    }
    int k=0;
    for(i=1;i<=Ar1[n-1];i++)
    {
       Ar3[k]=Ar1[n-1]*i;
        k++;
    }
    
    int l=k;

  
    for(i=0;i<m;i++)
    {
    	int x=0;
        for(k=0;k<l;k++)
        {
            if(Ar2[i]%Ar3[k]==0)
            {
                x++;
            }
        }
        if(x==m)
        {
        	count++;
		}
    }
    printf("%d",count);
}

