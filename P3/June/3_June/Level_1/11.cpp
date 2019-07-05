#include<bits/stdc++.h>
using namespace std;

int main()
{
    int x, n;
    cin >> x >> n;

    float term = x;
    float sum = x;

    for(int i = 2; i <= n; i++ )
    {
        term = (term * x * x )/((2 * i - 1) * (2 * i - 2));

        if(i % 2 == 0)
        {
            sum += term*-1;
        }
        else
        {
            sum += term;
        }
    }
    cout << sum;
}
