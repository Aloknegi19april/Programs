#include<iostream>
#include <algorithm>
using namespace std;
int main()
{
	int Ar[10000], n , i ,j ,count,max=-1;
	scanf("%d",&n);
	
	for ( i = 0 ; i < n ; i++)
	{
		scanf("%d",&Ar[i]);
	}
	
	sort(Ar, Ar+n);
	
	for ( i = 0 ; i < n ; i++)
	{
		count=0;
		for(j = i ; j < n ; j++ )
		{
			if(abs(Ar[i]-Ar[j])<2)
			{
				count++;
			}
		}
		if(count>max)
		{
			max=count;
		}
	}
	printf("%d",max);
}
