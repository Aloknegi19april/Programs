#include<stdio.h>
#include<string.h>
#include<math.h>
#include<stdlib.h>
int main()
{
	char Ar[10000];
	int q,len,i,j,count,diff;
	
	scanf("%d",&q);
	
	for(i=0;i<q;i++)
	{
		count=0;
		
		scanf("%s",&Ar);
		
		len=strlen(Ar);
		
		for (j=0;j<(len/2);j++)
		{
			diff = abs(Ar[j]-Ar[len-j-1]);
            count = count + diff;
		}
		
		printf("%d\n",count);
	}
}
