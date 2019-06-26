/* coin change problem*/

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int m=5,k;
    int S[m] = {0,2,5,10,25,50};
    int Ar[n+1][m+1];

    for(int i = 1; i <= n; i++)
        Ar[i][0] = 0;

    for(int i = 1; i <= n; i++)
        Ar[0][i] = 1;

    for(int i = 1; i <= n; i++)
        for(int j = 1; j <= m; j++)
        {
            k = 0;
            if(i >= S[j])
                k=Ar[i-S[j]][j];
            Ar[i][j] = k + Ar[i][j-1];
        }

    cout << Ar[n][m];
}
