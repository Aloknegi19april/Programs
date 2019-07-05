#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int a, b;
    cin >> a >> b;

    for(int i = 3; i <= n; i++)
    {
        if(i % 2 == 0)
        {
            b=b*3;
        }
        else
        {
            a*=2;
        }
    }
    if( n % 2 == 0)
        cout << b;
    else
        cout << a;

}
