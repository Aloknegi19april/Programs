#include<stdio.h>
#include<math.h>
#include<string.h>
int main()
{
    char ch[100];
    int i,j,x,y,len,z;
    gets(ch);
    len=strlen(ch);
    x=floor(sqrt(len));
    y=ceil(sqrt(len));
    
    if(x*y<len)
    {
    	x=y;
	}
    
    for(i=0;i<y;i++)
    {
    	for(j=0;j<x;j++)
    	{
    		z=i+j*y;
    		if(z<len)
    		{
    			printf("%c",ch[z]);
			}
		}
		printf(" ");
	}
}
