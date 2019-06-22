#include<stdio.h>
#include<math.h>
int main()
{
	int q,a,b,i,j,x,count;
	
	scanf("%d",&q);
	for(i=0;i<q;i++)
	{
		scanf("%d %d",&a,&b);
		count=0;
		x=sqrt(b);
		for(j=1;j<=x;j++)
		{
			if(j*j>=a)
			{
				count++;
			}
		}
		printf("%d\n",count);
	}
}
