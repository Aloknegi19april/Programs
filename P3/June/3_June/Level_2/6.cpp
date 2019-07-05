#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;

    for(int i = 1; i <=n; i++)
    {
        if(i == n)
        {
            for(int j = 1; j <= n; j++)
            {
                cout << n-j+1;
            }
        }
        else
        {
            cout << i;

            for(int j = 2; j < n; j++)
            {
                cout<< " ";
            }
            cout << n-i+1;
        }

        cout << "\n";
    }
    for(int i = 1; i < n; i++)
    {
        cout << n-i;

            for(int j = 2; j < n; j++)
            {
                cout<< " ";
            }
            cout << i+1;
        cout << "\n";
    }
}
