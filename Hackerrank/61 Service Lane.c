#include<stdio.h>

int main()
{
	int n,t,Ar[100000],i,j,k,x,y,min;
	
	scanf("%d %d",&n,&t);
	for(i=0;i<n;i++)
	{
		scanf("%d",&Ar[i]);
	}
	
	for(i=0;i<t;i++)
	{
		scanf("%d %d",&x,&y);
		min=999999;
		for(j=x;j<=y;j++)
		{
			if(Ar[j]<min)
			{
				min=Ar[j];
			}
		}
		printf("%d\n",min);
	}
}
