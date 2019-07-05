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
    int count=0;
    for(int i = 0; i < n; i++)
    {
        if(Ar[i] != Br[i])
        {
            count++;
        }
    }
    cout << count;
}
