#include<stdio.h>
#include<string.h>
int main()
{
	int Ar[30],i,j,area,x,y,sub,max;
	char ch[10];
	
	for(i=0;i<26;i++)
	{
		scanf("%d",&Ar[i]);
	}
	scanf("%s",ch);
	y=strlen(ch);
	max=0;
	for(i=0;i<y;i++)
	{
		sub=ch[i]-97;
		x=Ar[sub];
		if(max<x)
		{
			max=x;
		}
	}
	area=max*y;
	printf("%d",area);
}
