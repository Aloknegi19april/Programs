#include<bits/stdc++.h>
using namespace std;

int gcd(int a, int b)
{
    if(a!=b)
    {
        if(a>b)
            return gcd(a-b,b);
        else
            return gcd(b,b-a);
    }

    return a; 
}

int main()
{
    int n, m;
    cin >> n >> m;
    cout << gcd(n,m);
}
