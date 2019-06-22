#include<iostream>
using namespace std;
int main()
{
	int T, N, X, point, ml,mr, l,r, i;
	char S[100];
	cin>>T;
	while(T--)
	{
		ml=0;
		mr=0;
		l=0;
		r=0;
		point=0;
		cin>>N>>X;
		cin>>S;
		for(i = 0; i < N; i++)
		{
			if(S[i]=='R')
			{
				r++;
				l--;
				if(r>mr)
				{
					mr=r;
					point++;
				}
			}
			if(S[i]=='L')
			{
				r--;
				l++;
				if(l>ml)
				{
					ml=l;
					point++;
				}
			}
		}
		point+=1;
		cout<<point<<endl;
		
	}
}
