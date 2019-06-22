#include<stdio.h>

int main()
{
	int n,Ar[1000],i,count=0,c;
	
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&Ar[i]);
	}
	
	for(i=0;i<n-1;i++)
	{
		if(Ar[i]%2==1)
		{
			Ar[i]=Ar[i]+1;
			Ar[i+1]=Ar[i+1]+1;
			count=count+2;
		}
	}
	if(Ar[n-1]%2==0)
	{
		printf("%d",count);
	}
	else
	printf("NO");
}
