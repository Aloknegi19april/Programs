#include<iostream>
#include<string.h>
using namespace std;
int main()
{
	 int N,t,j;
	cin>>t;
	char P[100000],O[100000]="" ;
	for(int i = 1; i <= t; i++)
	{
		int m=0,u=0;
		int e=0,s=0;
		cin>>N;
		cin>>P;
		if(P[0]=='E')
		{
			O[j]='S';
			m+=N;
			u+=1;
			s++;

		}
		else
		{
			O[0]='E';
			m+=1;
			u+=N;
			e++;
		}
		int k;
		for(j = 0; j < strlen(P); j++)
		{	k=j+1;
			if(m==u && e<N&&s<<N)
			{
				if(P[j]=='E')
				{
					O[j]='S';
					m+=N;
					u+=1;
				}
				else
				{
					O[j]='E';
					m+=1;
					u+=N;
				}
			}
			else
			{
				if(P[j]=='E')
				{
					O[j+1]='E';
					m+=1;
					u+=1;
				}
				else
				{
					O[j+1]='S';
					m+=N;
					u+=N;
				}
			}
		}
		cout << "Case #" <<i<<": "<<O<<endl;
	}
}
