/*
2D Matrix to an array*/

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
    for(int i = 0; i < n; i++)
    {
        cout << Ar[i][i] <<" ";
    }
    cout << " \n";
    
    for(int i = 0; i < n; i++)
    {
        cout << Ar[i][n-1-i] << " ";
    }
}
