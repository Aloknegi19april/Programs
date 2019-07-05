#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int Ar[n], Br[n];
    for(int i = 0; i < n; i++)
    {
        cin >> Ar[i];
    }
    for(int i = 0; i < n; i++)
    {
        cin >> Br[i];
    }
    int strike , max_Strike= INT_MIN;
    for(int i = 0; i < n; i++)
    {
        strike = (Ar[i]/Br[i])*100;
        if(strike > max_Strike)
        {
            max_Strike = strike;
        }
    }
    cout << max_Strike;
}
