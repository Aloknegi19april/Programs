#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    cin >> n >> m;
    bool Ar[n][m];
    for(int i = 0; i < n; i++)
        for(int j = 0; j < m; j++)
            cin >> Ar[i][j];

    int sum;
    int min = INT_MAX, max = INT_MIN,a,b;
    for(int i = 0; i < n; i++)
    {
        sum = 0;
        for(int j = 0; j < m; j++)
        {
            sum+=Ar[i][j];
            if(sum > max)
            {
                max = sum;
                a = i;
            }
            if(sum < min)
            {
                min = sum;
                b = i;
            }
        }
    }
    cout << b <<"\n"<< a;
}
