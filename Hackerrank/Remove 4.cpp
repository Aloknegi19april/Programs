#include<iostream>
#include<math.h>
#include<stdlib.h>
using namespace std;
int main()
{
	long long int N,t,m,j,q;
	cin>>t;
	
	for(int i = 1; i <= t; i++)
	{
		m=0;
		cin>>N;
		int temp=N;
		j=0;
		while(temp>0)
		{
			if(temp%10==4)
			{
				m+=2*pow(10,j);
			}
			else
			{
				q=temp%10;
				m+=q*pow(10,j);
			}
			j++;
			temp=temp/10;
		}
		
		int a,b;
		a=N-m;
		b=m;
		printf("Case #%d: %d %d\n",i,a,b);
	}
}
