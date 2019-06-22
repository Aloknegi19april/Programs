#include<stdio.h>
#include<math.h>
int main()
{
	long long int p,q,n,c,count=0,l,r;
	long long int digit_l,digit_r,x;
	scanf("%lld",&p);
	scanf("%lld",&q);
	
	while(p!=q+1)
	{
		n=p*p;
		c=0;
		while(n!=0)
		{
			c++;
			n=n/10;
		}
		
		if(c%2==0)
		{
			l=c/2;
			r=c/2;
		}
		else
		{
			l=c/2;
			r=l+1;
		}
		n=p*p;
		digit_l=n/pow(10,r);
		x=pow(10,r);
		digit_r=n%x;
		
		if(p==digit_l+digit_r)
		{
			printf("%lld ",p);
			count++;
		}
		p++;
	}
	
	if(count==0)
	{
		printf("INVALID RANGE");
	}
}
