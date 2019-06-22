#include<bits/stdc++.h>
using namespace std;

bool isPerfectSq(int n)
{
    int s = sqrt(n);
    return (s*s==n);
}

bool fibonacci(int n)
{
    return isPerfectSq(5*n*n-4)||isPerfectSq(5*n*n+4);
}

int main()
{
    int n;
    cin>>n;
    cout << fibonacci(n);
}
