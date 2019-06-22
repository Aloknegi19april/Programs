#include<stdio.h>

int main()
{
	int d1,d2,m1,m2,y1,y2;
	int x;
	scanf("%d %d %d",&d1,&m1,&y1);
	scanf("%d %d %d",&d2,&m2,&y2);
	
	if(d1<=d2&&m1<=m2&&y1<=y2)
	{
		printf("0");
	}
	else if(d1>=d2&&m1>=m2&&y1<y2)
	{
		printf("0");
	}
	else if(d1>=d2&&m1<m2&&y1<=y2)
	{
		printf("0");
	}
	else if(d1<=d2&&m1>=m2&&y1<y2)
	{
		printf("0");
	}
	else if(d1-d2>0&&m1==m2&&y1==y2)
	{
		x=15*(d1-d2);
		printf("%d",x);
	}
	else if(m1-m2>0&&y1==y2)
	{
		x=500*(m1-m2);
		printf("%d",x);
	}
	else if(y1>y2)
	{
		printf("10000");
	}
}
