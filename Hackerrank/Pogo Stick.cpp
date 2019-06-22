#include<iostream>
using namespace std;
int main()
{
	int T, N, K, A[100000] ,i;
	cin>>T;
	while(T--)
	{
		int c=0;
		cin>>N>>K;
		for(i = 0; i < N; i++)
		{
			cin>>A[i];
			if(A[i]>A[0]+K)
			{
				c+=A[i];
			}
		}
		cout<<c<<endl;
		
	}
}
