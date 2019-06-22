#include<bits/stdc++.h>
using namespace std;
int main()
{
    int count=0,n,i,j,a;
    cin>>n;
    for( i = 1; i <= n; i++ )
    {
        count+=i;
        a=count;
        for( j = 1; j <= i; j++)
        {
            if(i%2==0)
                std::cout <<-1*a-- << " ";
            else
                std::cout<<" "<<a--<<" ";
        }
        std::cout << '\n';
    }
}
