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

    int temp;

    for(int i = 0; i <= n/2; i++)
    {
        temp = Ar[i];
        Ar[i] = Ar[n-i-1];
        Ar[n-i-1] = temp;
    }
    for(int i = 0; i < n; i++)
    {
        cout << Ar[i] <<" ";
    }

}
