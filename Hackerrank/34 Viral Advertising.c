#include<stdio.h>

int main()
{
	int n,i,j,shared,total_like;
	int liked;
	scanf("%d",&n);
	shared=5;
	for(i=0;i<n;i++)
	{
		liked=shared/2;
		shared=liked*3;
		total_like=total_like+liked;
	}
	printf("%d",total_like);
}
