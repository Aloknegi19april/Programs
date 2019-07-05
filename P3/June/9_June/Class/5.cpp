/*
kth diagonal*/

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    cin >> n >> m;
    int Ar[n][m];
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < m; j++)
        {
            cin >> Ar[i][j];
        }
    }
    int start_row, start_col,k;
    cin >> k;

    if(k < n)
    {
        start_row = k;
        start_col = 0;
    }
    else
    {
        start_col = k-n+1;
        start_row = n-1;
    }
    for( ; start_row<n &&start_col < m; start_row--, start_col++ )
    {
        std::cout << Ar[start_row][start_col] << ' ';

    }
}
