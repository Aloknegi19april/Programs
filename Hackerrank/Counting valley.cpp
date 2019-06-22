#include<iostream>
using namespace std;

int main()
{
    char s;
    int n,sum=0,count=0;
    scanf("%d",&n);
    cin.ignore();

    
    while(cin>>s)
    {
        if(s=='U')
        {
            sum+=1;
            if (sum == 0) {
              count++;
            }
        }    
        if (s=='D')
        {
            sum-=1;
        }
        
    }
    printf("%d",count);
}
