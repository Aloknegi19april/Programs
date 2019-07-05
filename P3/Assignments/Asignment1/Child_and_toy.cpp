#include<bits/stdc++.h>
using namespace std;

long long m = 1000000007;

long long power(int a, int b)
{
    if(b == 0)
        return 1;
    return a * power(a, b-1)%m;
}

void no_Of_Ways(int n)
{
    cout << power(2,n) << "\n";
}

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        no_Of_Ways(n);
    }

}
