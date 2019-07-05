#include<bits/stdc++.h>
using namespace std;

int main()
{
    int x, n;
    cin >> x >> n;

    float term = 1;
    float sum = 1;

    for(int i = 2; i <= n; i++ )
    {
        term = (term * x )/(i - 1);
        sum += term;
    }
    cout << sum;
}
