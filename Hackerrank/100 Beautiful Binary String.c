#include<stdio.h>
#include<string.h>
int main()
{
	int n,i,j,c=0;
	char Ar[100];
	
	
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf(" ");
		scanf("%c",&Ar[i]);
	}
	for(i=0;i<n;i++)
	{
		if(Ar[i]=='0'&&Ar[i+1]=='1'&&Ar[i+2]=='0')
		{
			c++;
			i=i+2;	
		}
		
	}
	
	printf("%d",c);
}
