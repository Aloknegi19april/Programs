#include<stdio.h>

int main()
{
	int t,n,d,temp,i,count;
	
	scanf("%d",&t);
	for(i=0;i<t;i++)
	{
		scanf("%d",&n);
		count=0;
		temp=n;
		while(temp!=0)
		{
			d=temp%10;
			if(d!=0&&n%d==0)
			{
				count++;
			}
			temp=temp/10;
		}
		printf("%d\n",count);
	}
}
