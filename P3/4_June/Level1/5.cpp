#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;

    int i;
    for( i = 1; i*i*i<=n; i++);
    cout << i-1;
}
