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
    int count;
    for(int i = 0; i < n; i++)
    {
        count=0;
        for(int j = 0; j < n; j++)
        {
            if(Ar[i] != Br[j])
            {
                count++;
            }
        }
        if(count == n)
        {
            cout << Ar[i] << " ";
        }
    }
}
