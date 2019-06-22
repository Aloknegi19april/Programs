#include<stdio.h>
int main()
{
	int P,H,T,S,x;
	int total=0;
	scanf("%d %d %d %d %d",&P,&S,&T,&H,&x);
	
	if(S>=T)
	{
		total=P*T+H*(x-T);
	}
	else
	{
		total=P*x;
	}
	
	printf("%d",total);
}
