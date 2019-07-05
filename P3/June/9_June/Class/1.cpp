/*
Sum of Matrix*/

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
    int sum =0 ;

    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < m; j++)
        {
            sum+=Ar[i][j];
        }
    }
    cout << sum;
}
