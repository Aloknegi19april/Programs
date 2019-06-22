#include<stdio.h>
int main()
{
    int t,i;
    long long int m,n,s,z,result;
    scanf("%lli",&t);
    for(i=0;i<t;i++)
    {
        scanf("%lli%lli%lli",&n,&m,&s);
        if(m==n)
        {
            if(s==1)
            result=m;
            else
            result=s-1;
        }
        else
        {
            z=m%n;
            if(s+z-1<=n)
            result=s+z-1;
            else
            result=s+z-n-1;
        }
        printf("%lli\n",result);
    }
}
