#include<bits/stdc++.h>
using namespace std;

int gcd(int a, int b)
{
    if(a==0)
        return b;
    return gcd(b%a, a);
}

int lcm(int a, int b)
{
    return (a*b)/gcd(a,b);
}

int main()
{
    cout << lcm(9,18) << endl;
    cout << lcm(10,90) << endl;
}
