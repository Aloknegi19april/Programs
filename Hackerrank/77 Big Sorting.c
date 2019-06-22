#include<stdio.h>
int main()
{
	int n,i,j;
	unsigned long long int  Ar[1000000],temp;
	
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%llu",&Ar[i]);
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			if(Ar[i]<Ar[j])
			{
				temp=Ar[i];
				Ar[i]=Ar[j];
				Ar[j]=temp;
			}
		}
	}
	
	for(i=0;i<n;i++)
	{
		printf("%llu\n",Ar[i]);
	}
}
