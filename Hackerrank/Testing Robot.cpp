#include<iostream>
using namespace std;
int main()
{
	int T, N, X, point, max,min, i;
	char S[100];
	cin>>T;
	while(T--)
	{
		point = 0;
		max=0;
		min=999999;
		cin>>N>>X;
		cin>>S;
		for(i = 0; i < N; i++)
		{
			if(S[i]=='R')
			{
				X++;
				if(X>max)
				{
					max=X;
				}
			}
			if(S[i]=='L')
			{
				X--;
				if(X<min)
				{
					min=X;
				}
			}
		}
		point=max-min+1;
		cout<<point<<endl;
		
	}
}
