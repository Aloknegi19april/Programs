#include<stdio.h>

int main()
{
	int n,k,Ar[100],i,doses,max;
	
	scanf("%d %d",&n,&k);
	for(i=0;i<n;i++)
	{
		scanf("%d",&Ar[i]);
	}
	max=0;
	for(i=0;i<n;i++)
	{
		if(Ar[i]>max)
		{
			max=Ar[i];
		}
	}
	doses=max-k;
	if(doses>0)
		printf("%d",doses);
	else
		printf("0");
}
