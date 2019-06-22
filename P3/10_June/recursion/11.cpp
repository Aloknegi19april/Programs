#include<bits/stdc++.h>
using namespace std;

int maxofArray(int *Ar, int last)
{

    if(last == 0)
        return Ar[0];
    if(Ar[last]>maxofArray(Ar,last-1))
        return Ar[last];
    else
        return maxofArray(Ar,last-1);
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
    cout << maxofArray(Ar,last);
}
