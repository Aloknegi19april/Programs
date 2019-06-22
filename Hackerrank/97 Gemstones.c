#include<stdio.h>
#include<string.h>
int main()
{
	int n,i,j,c=0,len=100;
	char ch[100][100],ch1;
	
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf(" ");
		for(j=0;j<100;j++)
		{
			scanf("%c",&ch[i][j]);
			if(ch[i][j]==' ')
			{
				break;
			}
		}
		if(strlen(ch)<len)
		{
			ch1=ch;
		}
	}
	for(i=0;i<n;i++)
	{
		scanf(" ");
		for(j=0;j<n;j++)
		{
			printf("%c",ch[i][j]);
		}
	}
}
