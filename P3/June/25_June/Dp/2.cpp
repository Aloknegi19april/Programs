

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k;
    cin >> n >> k;

    int Ar[n+1][k+1];
    for(int j = 1; j <= k; j++)
        Ar[0][j]=0;

    for(int i = 0; i < n; i++)
        Ar[i][0]=1;

    for(int i = 1; i <= n; i++)
        for(int j = 1; j <= k; j++)
            Ar[i][j] = Ar[i-1][j] + k*Ar[i-1][j-1];

    cout << Ar[n][k];
}
