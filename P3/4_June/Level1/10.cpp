#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a, b;
    cin >> a >> b;
    int limit;
    if(a < b)
    {
        limit = sqrt(a);
    }
    else
    {
        limit = sqrt(b);
    }
    int i;
    for( i = 2; i<= limit; i++);
    {
        if( a % i == 0 || b % i == 0)
        {
            cout << "Not Co Prime";
            return 0;
        }
    }
    cout << "Co Prime";
}
