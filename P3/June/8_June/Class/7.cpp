/*
Choclate distribution problem
*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int min = INT_MAX;
    int n;
    cin >> n;
    int Ar[n];
    for(int i = 0; i < n; i++)
    {
        cin >> Ar[i];
    }
    int m, p , q;
    cin >> m;
    sort(Ar,Ar+n);
    for(int i = 0; i < n-m; i++)
    {
        if(Ar[i+m]-Ar[i]<min)
        {
            min = Ar[i+m]-Ar[i];
            p = i;
            q = i+m;
        }
    }
    for(int i = p; i < q; i++)
    {
        cout << Ar[i] << " ";
    }

}
