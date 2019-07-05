#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int a = 2, b = 10;
    int sum = a + b;
    cout << a << " " << b << " ";
    for(int i = 3; i <= 2*n; i++)
    {
        if(i % 2 == 0)
        {
            b *= 2;
            sum+=b;
            cout << b << " ";
        }
        else
        {
            a *= 3;
            sum+=a;
            cout << a << " ";
        }

    }
    std::cout  << '\n';
    cout << "Sum = " << sum;
}
