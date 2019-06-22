/*
Array to 2D Matrix*/

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int Ar[n];
    for(int i = 0; i < n; i++)
    {
        cin >> Ar[i];
    }
    int a, b;
    cin >> a >> b;
    int Br[a][b] ;
    int i,j,k =0;
    for(int index = 0; index < n; index++)
    {
        i = index /b;
        j = index%b;
        Br[i][j] = Ar[index];
    }
    for(int i = 0; i < a; i++)
    {
        for(int j = 0; j < b; j++)
        {
            cout <<Br[i][j];
        }
        cout << "\n";
    }
}
