#include<stdio.h>
#include<string.h>
int main()
{
	int i,n,Count[100]={0};
	char ch[100000];
	gets(ch);
	n=strlen(ch);
	for(i=0;i<n;i++)
	{
		Count[int(ch[i])]++;
	}
}