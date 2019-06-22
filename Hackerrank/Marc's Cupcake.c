#include<math.h>
#include<stdio.h>
int main()
{
	int n ,C[1000],temp,i,j;
	long long int dist=0;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&C[i]);
	}
	
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{	
			if(C[i]>C[j])
			{
				temp=C[i];
				C[i]=C[j];
				C[j]=temp;
			}
		}
	}
	
	for(i=0;i<n;i++)
	{
		dist=dist+pow(2,i)*C[i];
	}
	printf("%lld",dist);
}
