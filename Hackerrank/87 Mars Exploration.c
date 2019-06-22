#include<stdio.h>
#include<string.h>
int main()
{
	char s[100];
	int len,i,j,count=0;
	gets(s);
	len=strlen(s);
	
	for(i=0;i<len;i+=3)
	{
		for(j=i;j<i+3;j++)
		{
			if(j==i&&s[j]!='S')
			{
				count++;
			}
			else if(j==i+1&&s[j]!='O')
			{
				count++;
			}
			else if(j==i+2&&s[j]!='S')
			{
				count++;
			}
		}
	}
	printf("%d",count);
}
