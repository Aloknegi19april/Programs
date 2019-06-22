#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int Ar[n][n];
    for(int i = 0; i < n; i++)
        for(int j = 0; j < n; j++)
            cin >> Ar[i][j];

    int i,a = 0, max = INT_MIN,max1[n]= {0},j,b;
    for(i = 0; i < n; i++)
    {
        max = INT_MIN;
        for(j = 0; j < n; j++)
        {
            if(Ar[i][j] > max)
            {
                max = Ar[i][j];
            }

            if(Ar[j][i] > max1[j])
            {
                max1[i] = Ar[j][i];

            }

        }
        cout <<max<<" ";

    }
    cout  << '\n';
    for(int i = 0; i < n; i++)
    {
        cout <<max1[i]<<" ";
    }


}
