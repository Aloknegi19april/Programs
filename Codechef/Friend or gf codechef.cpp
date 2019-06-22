#include<iostream>
#include<string>
using namespace std;
int main()
{
	char Ar[10000], x;
	int t,n,i,j,count;
	cin>>t;
	while(t--)
	{
		cin>>n;
		cin>>Ar;
		cin>>x;
		int max=-1;
		int min=999999;
		count=0;
		for( i = 0; i < n; i++)
		{
			if(Ar[i]==x)
			{
				count+=((n-i)*(i+1));
				if(i<min)
				min=i;
				if(i>max)
				max=i;
				
			}
		}
		count-=min+n-max;
		if(min!=0&&max!=n-1)
		{
			count-=(min*(n-1-max));
		}
		cout<<count<<endl;
	}
}
