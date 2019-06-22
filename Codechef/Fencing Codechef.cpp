#include<iostream>
using namespace std;
int main()
{
	int Ar[1000][1000], i,j,r[1000],c[1000],n,m,t;
	cin>>t;
	while(t--)
	{
		int count = 0,k;
		cin>>n>>m>>k;
		i=1;
		while(k--)
		{
			cin>>r[i]>>c[i];
		
			i++;
		}
		int l=i;

		k=1;
		for(i = 1; i <= n; i++)
		{
			for(j = 1; j <= m; j++)
			{
			    Ar[i][j]=-1;
				if(i==r[k]&&j==c[k]&& k<=l)
				{
					Ar[i][j]=0;
					
					if(Ar[i-1][j]==0&&i-1>0)
					{
						count-=2;
					}
					if(Ar[i][j-1]==0&&j-1>0)
					{
						count-=2;
					}
					k++;
					
				}
			}
		}
		cout<<count;
	}
	return 0;
}