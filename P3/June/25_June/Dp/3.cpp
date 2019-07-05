

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,r;
    cin >> n >> r;
    long long int p = 1000000007;
    long long int Ar[n+1][r+1];
    for(int i = 1; i <= n; i++)
        for(int j = 1; j <= r; j++)
            Ar[i][j] = (Ar[i-1][j]%p + Ar[i-1][j]%p)%p;

    cout << Ar[n][r];
}
