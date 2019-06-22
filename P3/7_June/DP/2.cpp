/*
fibonacci
*/

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int value[n+1];
    value[0] = 0, value[1] = 1;
    for(int i = 2; i <=n ; i++)
    {
        value[i] = value[i-1] + value[i-2];
    }
    cout << value[n];
}
