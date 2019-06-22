#include<iostream>
using namespace std;

int main()
{
	int M=15,n=3,Ar[3][3];
	int i,j,sumr[3]={0},sumc[3]={0},sumd[2]={0};
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			scanf("%d",&Ar[i][j]);
			sumr[i]+=Ar[i][j];
			sumc[j]+=Ar[i][j];
		}
	}
	for(i=0;i<n;i++)
	{
		printf(" sumc[%d] : %d\n",i,sumc[i]);
		printf(" sumr[%d] : %d\n",i,sumr[i]);
	}
	
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			if(sumr[i]!=15)
			{
				if(sumc[j]!=15&&i==j)
				{
					Ar[i][j]+=(15-sumr[i])%15;
					
				}
			}
		}
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("%d",Ar[i][j]);
		
		}
		
		printf("\n");
	}
	
	
}
