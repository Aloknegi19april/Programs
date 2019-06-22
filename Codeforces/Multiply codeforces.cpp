#include<iostream>
#include<math.h>
#include<stdlib.h>
using namespace std;
int main()
{
	unsigned long long int n,p=1, temp,c=0,m,k;
	cin>>n;
	temp=n;
	do{
	temp=temp/10;
		c++;
	}while(temp>0);
	if(n<10)
	{
		cout<<n;
		return 0;
	}
	if(n%10==0)
	{
		n--;
		goto y;
	}
	m=n;

	while(m>0)
	{

		if(m%10==0){
			temp=pow(9,c-1);
			break;
		}
		m=m/10;
		
	}
	k=n/(int)pow(10,c-1);
	p=temp*(k-1);
	goto x;
	y:
	while(n>0)
	{
		if(n%10==0){
			p*=9;	
		}
		else
		 p*=n%10;
		n=n/10;
	}
	x:
		
	cout<<p;
}
