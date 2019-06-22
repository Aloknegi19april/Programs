#include<stdio.h>
int main()
{
	int n,q,l,k,Ar[100000];
	int i,j,count=0,x,c;
	
	scanf("%d %d",&n,&q);

	for(i=0;i<n;i++)
	{
		scanf("%d",&Ar[i]);
	}

	for(i=0;i<q;i++)
	{
		scanf("%d %d",&l,&k);
		for(j=0;j<n;j++)
		{
			x=0;
			c=1;
			while(x<l)
			{
				if(Ar[j]!=Ar[j+x]&&Ar[j+x]<=j+l-1)
				{
					c++;
					x++;
					printf("if c:%d x: %d\n",c,x);
				}	
				else
					x++;
					printf("else c:%d x: %d\n",c,x);
						
			}
			
			if(c>=k&&x==l+1)
			{
				count++;
				printf("count :%d\n",count);
			}
		}
		printf("%d",count);
	}
}
