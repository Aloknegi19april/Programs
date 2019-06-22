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
    int Br[n*m] ;
    int k =0;
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < m; j++)
        {
            Br[k] = Ar[i][j];
            k++;
        }
    }
    for(int i = 0; i < n*m; i++)
    {
        cout << Br[i];
    }
}
