#include<iostream>
#include<string.h>
using namespace std;
int main()
{
	int n ,max, min, i,len;
	char S[100];
	cin>>n;
	while(n--)
	{
		cin>>S;
		len = strlen(S);
		max=96;
		min=123;
		for(i=0;i<len;i++)
		{
			if(S[i]<=min)
			{
				min=S[i];
			}
			if(S[i]>=max)
			{
				max=S[i];
			}	
		}
	
			if((max-min+1)==len)
			{
				cout<<"YES"<<endl;
			}	
		
		
		else
		{
			cout<<"NO"<<endl;
		}
	}
}
