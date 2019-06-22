#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int d, j=1,i;
    cin >> d;
    int Ar[n];
    if(d>n)
        d= d%n;
    for(int i = 1; i <= n; i++ )
    {
        cin >> Ar[i];

    }

    for(int i = d+1; i <= n; i++)
    {
        cout << Ar[i]<<" ";
    }

    for(int i = 1; i <= d; i++)
    {
        cout << Ar[i]<<" ";
    }
}
