#include<stdio.h>

int main()
{
	int t,n,c,m,i,j,sum=0;
	int chclte,wraper,new_chclte;
	scanf("%d",&t);
	for(i=0;i<t;i++)
	{
		scanf("%d %d %d",&n,&c,&m);
		
		chclte=n/c;
		sum=chclte;
		while(chclte>=m)
		{
			new_chclte=chclte/m;
			wraper=chclte%m;
			sum=sum+new_chclte;
			chclte=wraper+new_chclte;
		}
		
		printf("%d\n",sum);
	}
}
