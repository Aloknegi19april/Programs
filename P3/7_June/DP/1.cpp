/*
Factorial
*/

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    long long int value[n+1];
    value[0]=1;
    for(int i = 1; i <= n; i++)
    {
        value[i] = i * value[i-1];
    }
    cout << value[n];
}
