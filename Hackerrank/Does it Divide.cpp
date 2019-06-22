#include<iostream>
#include<math.h>
using namespace std;
int main()
{
	int T, N, j;
	cin>>T;
	while(T--)
	{
		int prime =0;
		cin>>N;
		if(N==2)
		{
			cout<<"NO"<<endl;
			continue;
		}
		if(N==1)
		{
			cout<<"YES"<<endl;
			continue;
		}
		for( j = 2; j <= sqrt(N+1); j++)
		{
			if((N+1)%j==0)
			{
				cout<<"YES";
				break;
			}
			if(j==(int)sqrt(N+1))
			{
				cout<<"NO"<<endl;
			}
		}
		cout<<endl;
	}
}
