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

    for(int i = 0; i < n; i++)
    {
        if(Ar[i] % 2 == 0 && Br[i] % 2 == 0)
        {
            Ar[i] = Ar[i]+ Br[i];
        }
        if(Ar[i] % 2 != 0 && Br[i] % 2 != 0)
        {
            Ar[i] = Ar[i]* Br[i];
        }
    }
    for(int i = 0; i < n; i++)
    {
        cout << Ar[i] << " ";
    }
}
