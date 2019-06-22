#include<iostream>
using namespace std;
int main()
{
	int Ar[100],n,i,max=-1,min=9999,D,a,count=0;
	cin>>n;
	for(i=0;i<n;i++)
	{
		cin>>Ar[i];
		if(Ar[i]>max)
		{
			max=Ar[i];
		}
		if(Ar[i]<min)
		{
			min=Ar[i];
		}
	}
	D=(max-min);
	if(D%2==0)
	{
		D=D/2;
	}
	a=min+D;
	for(i=0;i<n;i++)
	{
		if(Ar[i]==a)
		{
			count++;
		}
		if(Ar[i]<a)
		{
			Ar[i]=Ar[i]+D;
			if(Ar[i]==a)
			{
				count++;
				
			}
		}
		if(Ar[i]>a)
		{
			Ar[i]=Ar[i]-D;
			if(Ar[i]==a)
			{
				count++;
			}
		}
	
	}
	if(count==n)
	{
		cout<<D;
	}
	else
	{
		cout<<"-1";
	}
}
