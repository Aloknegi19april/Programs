/*
Sum of an ap
*/

#include<bits/stdc++.h>
using namespace std;

int sum(int a,int d, int n )
{
    if( n == 0)
        return a;
    return d + sum(a,d,n-1) ;
}

int main()
{
    int a,d;
    cin >> a >> d;
    int n;
    cin >> n;
    cout << sum(a,d,n);
}
