#include<stdio.h>
#include<string.h>
int main()
{
	int c=1,i,len;
	char s[100000];
	
	gets(s);
	len=strlen(s);
	for(i=0;i<len;i++)
	{
		if(s[i]>=65&&s[i]<=90)
		{
			c++;
		}
	}
	printf("%d",c);
}
