#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
        {
            if(i > j)
            {
                cout << n-i << " ";
            }
            else if( i == j)
            {
                cout << n-i<< " ";
            }
            else
            {
                cout << n-j<< " ";
            }

        }
        int toprint = 2;
        for(int j = 1; j < n; j++)
        {
            if(i == n-1)
            {
                toprint = 1;
            }
            cout << toprint << " ";
            if(j < n-i-1)
            toprint++;

        }
        cout << "\n";
    }
    int toprint = 2;
    for(int i = 1; i < n; i++)
    {
        for(int j = 1; j <= n - i; j++)
        {
            cout << toprint<<" ";
        }
        toprint++;
        int print = i;
        for(int j = 1; j <= i; j++)
        {
            cout<< print <<" ";
            print--;
        }
        int writer = 2;
        for(int j = 1; j < n; j++)
        {
            if( i == 1)
            {
                cout << writer<<" ";
            }
            else if(j < i)
            {
                cout << writer<<" ";
                writer++;
            }
            else
            {
                cout<<writer<< " ";
            }
        }
        cout << "\n";
    }
}
