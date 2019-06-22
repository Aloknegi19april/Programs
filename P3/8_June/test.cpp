#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int Ar[n];
    for(int i = 0; i < n; i++)
    {
        cin >> Ar[i];
    }
    int sum = 0;

    sort(Ar, Ar+n);

    sum = Ar[1]-Ar[0] + Ar[n-1]-Ar[n-2];
    for(int i = 1; i < n-1; i++)
    {
        if(Ar[i]-Ar[i-1] < Ar[i+1]-Ar[i])
        {
            sum+=Ar[i]-Ar[i-1];
        }
        else
        {
            sum+=Ar[i]-Ar[i+1];
        }
    }
    cout << sum;
}
