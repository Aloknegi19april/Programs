#include<iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
	long long int x[4],a,b,c,d,i,a1,b1,c1;
	for(i = 0; i < 4; i++)
	{
		cin>>x[i];
	}
	sort(x,x+4);
	a1=x[0]-x[1];
	b=(a1+x[2])/2;
	a=x[0]-b;
	c=x[1]-a;
	cout<<a<<" "<<b<<" "<<c;
	
	
	
	
}
