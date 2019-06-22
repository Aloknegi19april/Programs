#include<bits/stdc++.h>
using namespace std;

int d2b(int n,int exp)
{
    if(n==0)
        return 0;
    return (n%2)*pow(10,exp) + d2b(n/2,exp+1);
}

int main()
{
    int n;
    cin >> n;
    int exp = 0;
    cout << d2b(n,exp);
}
