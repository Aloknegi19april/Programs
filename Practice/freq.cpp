#include<iostream>
using namespace std;
int main()
{
	int a,C[10]={0},i;
	for(i=0;i<10;i++)
	{
		cin>>a;
		C[a]++;
	}

	for(i=0;i<10;i++)
	{
		cout<<i<<" "<<C[i]<<"\n";
	}
	
	
	
}
