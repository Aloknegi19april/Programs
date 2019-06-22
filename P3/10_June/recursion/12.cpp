#include<bits/stdc++.h>
using namespace std;

int sumofArray(int *Ar, int last)
{

    if(last == 0)
        return Ar[0];

    return Ar[last]+sumofArray(Ar,last-1);
}

int main()
{
    int n;
    cin >> n;
    int Ar[n];
    for(int i = 0; i < n; i++)
    {
        cin >> Ar[i];
    }
    int last = n-1;
    cout << sumofArray(Ar,last);
}
