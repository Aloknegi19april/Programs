#include<stdio.h>
#include<string.h>
int main()
{
	char Ar[100],ch[100];
	int i,len,j;
	gets(Ar);
	len=strlen(Ar);
	while(i<len-1)
	{
		if(Ar[i]==Ar[i+1])
		{
			int t=i;
			Ar[i]=Ar[i+2];
			i=t;
			i=0;
		}
		else
			i++;
		
	}
	if(strlen(Ar)==0)
	{
		printf("Empty String");
	}
	else
		puts(ch);
}
