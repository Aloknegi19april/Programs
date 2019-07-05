#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;

    for(int i = 1; i <=n; i++)
    {
        if(i == 1 || i == n)
        {
            for( int j = 1; j <= n; j++)
            {
                cout << j;
            }
        }
        else
        {
            for(int j = 1; j <= n-i; j++)
            {
                cout<<" ";
            }
            cout << n - i + 1;
        }
        cout << "\n";
    }
}
