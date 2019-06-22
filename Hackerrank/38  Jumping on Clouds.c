#include<stdio.h>

int main()
{
	int n,k,i,Ar[25];
	int e=100;
	scanf("%d %d",&n,&k);
	for(i=0;i<n;i++)
	{
		scanf("%d",&Ar[i]);
	}
	i=k;
	for(i=0;i<n;i=k+i)
	{
		if(Ar[i]==0)
		{
			e=e-1;
		}
		else
		{
			e=e-1-2;
		}
	}
	
	printf("\t%d",e);
}
