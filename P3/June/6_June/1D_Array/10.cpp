#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int Ar[n], Br[n], Cr[n];
    for(int i = 0; i < n; i++)
    {
        cin >> Ar[i];
    }
    for(int i = 0; i < n; i++)
    {
        cin >> Br[i];
    }

    for(int i = 0; i < n; i++)
    {
        Cr[i] = Ar[i] ^ Br[i];
    }
    for(int i = 0; i < n; i++)
    {
        cout << Cr[i] << " ";
    }
}
