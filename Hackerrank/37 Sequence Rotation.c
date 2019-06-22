#include<stdio.h>

int main()
{
	int n,x,y,Ar[50];
	scanf("%d",&n);
	
	for(x=1;x<=n;x++)
	{
		scanf("%d",&Ar[x]);
	}
	
	
	for(x=1;x<=n;x++)
	{
		for(y=1;y<=n;y++)
		{
			if(Ar[Ar[y]]==x)
			printf("%d\n",y);
		}
		
	}
}
