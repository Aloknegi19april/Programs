#include<bits/stdc++.h>
using namespace std;

int gcd(int a, int b)
{
    if(a==0)
        return b;
    return gcd(b%a, a);
}

int main()
{
    cout << gcd(90,100) << endl;
    cout << gcd(100,90) << endl;
}
