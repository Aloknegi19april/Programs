#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, m;
    cin >> n >> m;
    int Ar[n][m];

    for(int i = 0; i < n; i++)
        for(int j = 0; j < m; j++)
            cin >> Ar[i][j];

    int a = n * m;
    int odd[a], even[a];

    int k = 0 , l = 0;
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
        {
            if(Ar[i][j] % 2 == 0)
            {
                even[k] = Ar[i][j];
                k++;
            }
            else
            {
                odd[l] = Ar[i][j];
                l++;
            }
        }
    }



    for(int i = 0; i < k; i++)
        cout << even[i] << " ";

    cout << "\n";

    for(int i = 0; i < l; i++)
        cout << odd[i] << " ";

}
