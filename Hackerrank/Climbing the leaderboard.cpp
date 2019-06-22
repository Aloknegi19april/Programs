#include<iostream>
#include <algorithm>
using namespace std;
int main()
{
	int Scores[100000],Alice[100000] ,n ,m , i ,j ;
	int k=1, count=0,max=-1;

	scanf("%d",&n);
	
	for ( i = 0 ; i < n ; i++)
	{
		scanf("%d",&Scores[i]);
		for( j = i ; j < n ; j++)
		{
			if(Scores[i]!=Scores[j])
			{
				k++;
				break;
			}
			
		}
	}
	
	
	scanf("%d",&m);
	
	for ( i = 0 ; i < m ; i++)
	{
		scanf("%d",&Alice[i]);
	}
	
	
	for ( j = 0 ; j < m ; j++ )
	{
		for(i = n-1 ; i >= 0 ; i-- )
		{
			if(Alice[j]>Scores[i])
			{
				
			}
			else
			{
				rank[k]+=1;
				k--;
				break;
			}
		}
		printf("%d",rank[k+1])
	}
}
