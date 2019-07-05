#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int Ar[n];
    int max = INT_MIN;
    for(int i = 0; i < n; i++)
    {
        cin >> Ar[i];
    }
    for(int i = 0; i < n; i++)
    {
        if(Ar[i] > max)
        {
            max = Ar[i];
        }
    }
    cout << max;
}
