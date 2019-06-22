#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int a, b, c;
    cin >> a >> b >> c;
    int d = b - a;
    cout << a << " ";
    cout << b << " ";
    cout << c << " ";
    int sum = a + b + c;
    for( int i = 4; i <= n; i++)
    {
        c+=d;
        sum+=c;
        cout << c << " ";
    }
    cout << endl;
    cout << sum;
}
