#include<stdio.h>
#include<string.h>
int main()
{
	int t,j=0,k=0; 
	scanf("%d",&t);
	int i,n[1000],h[1000];
	for(i=0;i<t;i++)
	{
    	scanf("%d",&n[i]);
	}
	for(i=0;i<t;i++)
	{
    	while(j<=n[i])
		{
        	if(j%2==0)
            	k=k+1;
        	else
            	k=2*k;
        	j++;
    	}
    	j=0;
    	h[i]=k;
    	k=0;
	}
	for(i=0;i<t;i++)
	{
    	printf("%d\n",h[i]);
	}
	
}
