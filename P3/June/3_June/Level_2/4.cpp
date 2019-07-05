#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int toprint = 3;
    for(int i = 1; i <=n; i++)
    {
        for(int j =1; j <=i; j++)
        {
            cout << toprint;
        }
        toprint++;
        cout << "\n";
    }
    toprint-=2;
    for(int i = 1; i < n; i++)
    {
        for(int j =1; j <= n-i; j++)
        {
            cout << toprint;
        }
        toprint--;
        cout << "\n";
    }
}
