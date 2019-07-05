#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, k;
    cin >> n;
    cin >> k;
    int Ar[n];
    for(int i = 0; i < n; i++)
    {
        cin >> Ar[i];
    }
    for(int i = 0; i < n; i++)
    {
        for(int j = i+1; j < n; j++)
        {
            if(Ar[i]+Ar[j]==k)
            {
                cout <<"Yes";
                return 0;
            }
        }
    }
}
