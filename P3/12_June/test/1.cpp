#include<bits/stdc++.h>
using namespace std;

long long int power(int a,int b)
{
    if(b==0)
        return 1;
    return (a * power(a,b-1))%1000000007;
}

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int a, b;
        cin >> a >>b;
        cout << power(a,b);
    }
}
