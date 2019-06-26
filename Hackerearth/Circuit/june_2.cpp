#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    int m;
    cin >> n >> m;

    int Ar[n][m];
    int index_i, index_j;
    int max = INT_MIN;
    for(int i = 1; i <= n; i++)
        for(int j = 1; j <= n; j++)
        {
            cin >> Ar[i][j];
            if(Ar[i][j] > max )
            {
                max = Ar[i][j];
                index_i = i;
                index_j = j;
            }
        }

    int dist;

    if (index_i == n && index_j == m)
        dist = 2 * (index_i-1);
    else if (index_i!=index_j)
        dist = (index_i - 1)+index_j-1;
    else
        dist = index_i-1;

    cout << dist;
}
