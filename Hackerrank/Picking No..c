#include<stdio.h>

int main()
{
	int n,Ar[100],i,j,count=0;
	
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&Ar[i]);
	}
	
	for(i=0;i<n-1;i++)
	{
		for(j=1;j<n;j++)
		{
			if(i!=j&&Ar[i]-Ar[j]<=1&&count<=5)
			{
				count++;
			}
		
		}
	}
	printf("%d",count);
}
