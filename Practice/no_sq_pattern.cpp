#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    int i,j,n;
    cin >> n;

    for( i = 0; i < 2*n-1; i++ )
    {
        for( j = 0; j < 2*n-1; j++ )
        {
            if( j < i)
                std::cout << n-j << ' ';
            else if( i+j > n*2-1-i)
                std::cout << (j-i)%(i+(n*2-2)) << ' ';
            else
                cout << n - i<<" ";
        }
        cout<<"\n";
    }
}
