#include<stdio.h>

int main()
{
	int n,m,i,j,max=0,c;
	int count=0,k;
	char Ar[500][500];
	scanf("%d %d",&n,&m);
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		{
			scanf("%c",&Ar[i][j]);
		}
	}


	for(i=0;i<n-1;i++)
	{
		for(j=i+1;j<n;j++)
		{
			count=0;
			for(k=0;k<m;k++)
			{
				if(Ar[i][k]=='1'||Ar[i][k]=='1')
				{
					count++;
				}
			}
			if(count>max)
			{
				max=count;
				c=1;
			}
			if(count==max)
			{
				c++;
			}
		
		}
		
	}

	printf("%d",max);
	printf("\n%d",c);
}
			
