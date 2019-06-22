#include<stdio.h>
#include<stdlib.h>

int main()
{
    int i,j,k,x,sub,count=0;
    int rev=0,digit,temp,y;

    scanf("%d %d %d",&i,&j,&k);
    
    for(x=i;x<=j;x++)
    {
        temp=x;
        rev=0;
        while(temp!=0)
        {
            digit=temp%10;
            rev=rev*10+digit;
            temp=temp/10; 
        }
        sub=abs(x-rev);
        y=sub%k;
        if(y==0)
        {
            count++;
        }
    }
    printf("%d\t",count);
}
