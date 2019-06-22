#include<stdio.h>
int main()
{
	int n,Ar[1000000],i,j,x,y;
	int min_diff=9999999,diff;
	
	scanf("%d",&n);
	
	for(i=0;i<n;i++)
	{
		scanf("%d",&Ar[i]);
	}
	
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			diff=Ar[i]-Ar[j];
			if(diff<min_diff&&i!=j)
			{
				x=Ar[i];
				y=Ar[j];
			}
		}
	}
	printf("%d %d",x,y);
}
