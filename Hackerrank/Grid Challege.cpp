#include<iostream>
using namespace std;

int main()
{
	int i, j, t, n;
	char Str[100][100];
	scanf("%d",&t);
	
	while(t--)
	{
		scanf(" %d ", &n );
		
		for( i = 0; i < n; i++ );
		{
			for( j = 0; j < n ; j++)
			{
				cin.getline(Str[i],100);
			}
		}
		

		
			sort(Str.begin(), Str.end()); 
  			cout << str; 
		
		for( i = 0; i < n; i++ );
		{
			for( j = 0; j < n ; j++)
			{
				puts(Str[i],100);
			}
		}
		
	}
}
