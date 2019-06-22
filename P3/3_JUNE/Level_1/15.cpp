#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int a = 2;
    for( int i = 2; i <= n; i++)
    {
        a*=2;
    }
    cout << a;
}
