#include<iostream>
using namespace std;
int main()
{
	int n, Doors[1000000],l=0,r=0;
	int i, c[10]={0};
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		scanf("%d",&Doors[i]);
		c[Doors[i]]++;
	}
	for(i=1;i<=n;i++)
	{
		if(Doors[i]==0)
		{
			l++;
		}
		if(Doors[i]==1)
		{
			r++;
		}
		if(l==c[0])
		{
			cout<<i;
			break;
		}
		if(r==c[1])
		{
			cout<<i;
			break;
		}
		
	}
	return 0;
}
