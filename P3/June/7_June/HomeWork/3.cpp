/*
123 = 1+2+3
*/

#include<bits/stdc++.h>
using namespace std;

int sum(int a )
{
    if( a == 0)
        return 0;
    return a%10+ sum(a/10) ;
}

int main()
{
    int a;
    cin >> a ;
    cout << sum(a);
}
