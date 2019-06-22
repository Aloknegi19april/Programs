#include<stdio.h>

int main()
{
	int n,Ar[100],i,j,max;
	int c[100]={0};

	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&Ar[i]);
	}
	
	for(i=0;i<n;i++)
	{
		for(j=i;j<n;j++)
		{
			if(Ar[i]==Ar[j])
			{
				c[i]++;
			}
		}
	}
	max=c[0];
	for(i=0;i<n;i++)
	{
		if(c[i]>max)
		{
			max=c[i];
		}
	}
	
	printf("%d",n-max);
}
			
