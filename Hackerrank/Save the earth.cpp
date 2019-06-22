#include<iostream>
#include<string.h>
using namespace std;
int main()
{
	int T , D, i=1, j, damage=1,k,count=0,flag=0;
	int shoot = 0;
	char algo[100];
	scanf("%d",&T);
	y:
	while(i<=T)
	{
		flag=0;
		count=0;
		scanf("%d",&D);
		cin>>algo;
		x:
			damage=1;
			shoot=0;
			for( j = 0; j < strlen(algo); j++)
			{
				if(algo[j]=='C')
				{
					damage*=2;
					flag=1;
				}
				if(algo[j]=='S')
				{
					shoot+=damage;
				}
			}
		
		if(shoot>D)
		{
			if(flag==0)
			{
				printf("Case #%d: IMPOSSIBLE\n",i);
				i++;
				goto y;
			}
			for(k = strlen(algo)-1; k >= 0; k-- )
			{
				if(algo[k]=='S'&&algo[k-1]=='C')
				{
					swap(algo[k],algo[k-1]);
					count++;
					goto x;	
						
				}
			}
				
		}
		printf("Case #%d: %d\n",i,count);
		i++;
	}
}
