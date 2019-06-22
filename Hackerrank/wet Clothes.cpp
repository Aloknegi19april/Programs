#include<iostream>
using namespace std;
int main()
{
	int n, m, g, i, j,c=0,k=0;
	scanf("%d %d %d",&n,&m,&g);
	int t[10000],a[10000];
	for(i = 0; i < n; i++)
	{
		scanf("%d",&t[i]);
	}
	for(i = 0; i < m; i++)
	{
		scanf("%d",&a[i]);
	}
	int sub;
	for(i = 0; i < n-1; i++)
	{
		int flag=0;
		sub=t[i+1]-t[i];
		for(j = 0; j < m; j++)
		{
			if(a[j]<=sub&&a[j]>0&&k<g)
			{
	
				a[j]=0;
				flag=1;
				c++;
			}
		}
		if(flag=1)
		{
			k++;
		}
	}
	printf("%d",c);
}
