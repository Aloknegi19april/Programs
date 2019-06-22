#include<iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{

	long long int x[3],count=0,max=-1,min=99999999;
	int i;
	for(i = 0; i < 3; i++)
	{
		cin>>x[i];
		if(x[i]>max)
		{
			max=x[i];
		}
		if(x[i]<min)
		{
			min=x[i];
		}
	}
	int a;
	if(x[0]==max)
	{
		x[0]--;
		count++;
	}
	char Ar[]="abcacba";
	while(x[0]>=0&&x[1]>=0&&x[2]>=0)
	{
		for(i=0;i<7;i++)
		{
			if(Ar[i]=='a')
			{
				x[0]=x[0]-1;
				if(x[0]==-1)
				{
					break;
				}
			}
			else if(Ar[i]=='b')
			{
				x[1]=x[1]-1;
				if(x[1]==-1)
				{
					break;
				}
			}
			else if(Ar[i]=='c')
			{
				x[2]=x[2]-1;
				if(x[2]==-1)
				{
					break;
				}
			}
			count++;
		}
		
	}
	cout<<count;
}
