#include<iostream>
using namespace std;
int main()
{
	int A[100],B[100],C[100];
	int n,m,i,j,k=0,c=0,count=0;
	int max=0,min=99999;
	scanf("%d %d",&n,&m);
	
	for(i=0;i<n;i++)
	{
		scanf("%d",&A[i]);
		if(A[i]>max)
		{
			max=A[i];
		}
	}

	for(i=0;i<m;i++)
	{
		scanf("%d",&B[i]);
		if(B[i]<min)
		{
			min=B[i];
		}
	}
	
	for(i=max;i<=min;i++)
	{
		for(j=0;j<n;j++)
		{
			if(i%A[j]==0)
			{
				c++;
			}	
		}
	
		if(c==n)
		{
			C[k]=i;
		
			k++;
		}
		c=0;	
	}
	c=0;
	for(i=0;i<k;i++)
	{
		c=0;
		for(j=0;j<m;j++)
		{
			if(B[j]%C[i]==0)
			{
				c++;
			}
		}
		
		if(c==m)
		{
			count++;
		}
		c=0;	
	}
	
	printf("%d",count);
}
