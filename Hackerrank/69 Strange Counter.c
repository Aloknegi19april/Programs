#include<stdio.h>
#include<math.h>
int main()
{
	long int t,i=1,x=3,n;
	long int j,sum=1,y,temp;
	scanf("%ld",&t);
	y=pow(2,20);
	for(j=0;j<y;j++)
	{
		sum=sum+3*pow(2,j);
		x=3*pow(2,j);
		if(t<sum)
		{
			sum=sum-3*pow(2,j);
			
			break;
		}
	}
	for(n=sum;n<t;n++)
	{
		if(x==1)
		{
			x=3*pow(2,j);
			j++;
		}
		else
		{
			x--;	
		}	
		
	}
	printf("%ld",x);
}
