/*
    @author : Alok Negi
    @Date   : 21 April 2019
*/

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, i, j;
    cin >> n;

    for( i = 1; i <= n; i++ )
    {
        for( j = n-i; j >= 1; j-- )
        {
            cout  << "  ";
        }
        for( j = 1; j <= i*2-1; j++ )
        {
            cout  << "*" << " ";
        }
        cout << "\n";
    }
}
