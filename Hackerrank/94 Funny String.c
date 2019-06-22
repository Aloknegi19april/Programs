#include<stdio.h>
#include<string.h>
int main()
{
	char ch[10000],ch_rev[10000];
	int q,Ar[10000],Ar_rev[10000];
	int i,j,k,len;
	
	scanf("%d",&q);
	for(i=0;i<q;i++)
	{
		scanf(" ");
		gets(ch);
		len=strlen(ch);
		k=0;
		for(j=len-1;j>=0;j++)
		{
			ch_rev[k]=ch[j];
			k++;
		}
		
		puts(ch);
		puts(ch_rev);
	}
}
