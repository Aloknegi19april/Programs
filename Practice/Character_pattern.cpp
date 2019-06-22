#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    int i, j, n;
    cin >> n;
    for( i = 0; i < n; i++ )
    {
        for  ( j = 0; j <= i; j++ ) {
            /* code */
            cout<< (char)(i+65)<<" ";
        }
        std::cout  << '\n';
    }
}
