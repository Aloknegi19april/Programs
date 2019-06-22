#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i, j, n;
    cin>>n;
    for( i = 1; i <= n; i++ )
    {
        for( j = n-i; j >= 1; j-- )
        {
            std::cout <<" ";
        }
        for( j = 1; j <= i; j++)
        {
            std::cout << "*"<<" " ;
        }

        std::cout  << '\n';
    }
    for( i = 1; i <= n; i++ )
    {
        for( int k = 1; k <= i; k++)
        {
            std::cout <<" " ;
        }
        for( j = n-i; j >= 1; j--)
        {
            std::cout << "*"<<" " ;
        }

        std::cout  << '\n';
    }
}
