#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;
    for(int i = 1; i <= n; i++)
    {

        for(int l = 1; l < i; l++)
        {
            cout << " ";
        }
        if(i == 1 || i == n)
        {
            for(int k = 1; k <= m; k++)
            {
                cout << "*";
            }
            cout << "\n";
        }
        else
        {
            for(int j = 1; j <= m; j++)
            {

                if(j == 1 || j == m )
                {
                    cout << "*";
                }
                else
                {
                    cout << " ";
                }
            }

            cout << "\n";
        }

    }
}
