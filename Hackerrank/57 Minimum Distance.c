#include<stdio.h>
#include<stdlib.h>

int main()
{
	int n, Ar[100000];
	int i,j,x[100000],k,min=99999999,sub;

	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&Ar[i]);
	}
	k=0;
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(Ar[i]==Ar[j])
			{
				sub=abs(i-j);
				if(sub<min)
				{
					min=sub;
				}
			}
		}
	}
	if(min==99999999)
	{
		min=-1;
	}
	printf("%d",min);
}
