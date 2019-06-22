#include<iostream>
using namespace std;
int main()
{
	int n, t, S[100000], D[100000], i, j;
	int min=9999,pos, flag=0;
	cin>>n>>t;
	for( i = 1; i <= n; i++ )
	{
		cin>>S[i]>>D[i];
		if(S[i]>=t)
		{
			flag = 1;
		}
	}
	int bus = 0;
	if(flag == 0 )
	{
		for( i = 1; i <= n; i++)
		{
			
			bus=S[i];
			
			while(bus<=t)
			{
				bus+=D[i];
				
			}
		
			if(min>bus)
			{
				min=bus;
			
				pos=i;
				
			}	
		}
		cout<<pos;
	}
	else
	{
		for( i = 1; i <= n; i++ )
		{
			if(S[i]>=t)
			{
				cout<<i;
				break;
			}
		}
	}
	
}
