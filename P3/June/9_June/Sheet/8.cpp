#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;
    int Ar[n][m];
    for(int i = 0; i < n; i++)
        for(int j = 0; j < m; j++)
            Ar[i][j];

    for(int i = 1; i < n-1; i++)
    {
        for(int j = 1; j < n-1; j++)
        {
            if(Ar[i][j]>Ar[i-1][j]&&Ar[i][j]>Ar[i+1][j]&&Ar[i][j]>Ar[i][j-1]&&Ar[i][j]>Ar[i][j+1])
            {
                cout << Ar[i][j] << "\n";
            }
        }
    }
}
