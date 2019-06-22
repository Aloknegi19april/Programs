#include<stdio.h>
#include<stdlib.h>

int main()
{
	int p,d,m,s,count=0,sum;

	scanf("%d %d %d %d",&p,&d,&m,&s);
	sum=p;
	while(sum<=s)
	{
		if(p-d>m)
		{
			p=p-d;
			sum=sum+p;
		}
		else
		{
			sum=sum+m;
		}
		count++;
	}
	printf("%d",count);
}
