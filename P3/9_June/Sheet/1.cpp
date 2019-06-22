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


    int temp;

    for(int i = 0; i < n; i++)
        for(int j = 0; j < n; j++)
        {
            if(i!=j && j > i)
            {
                temp = Ar[i][j];
                Ar[i][j] = Ar[j][i];
                Ar[j][i] = temp;
            }
        }

    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
            cout <<  Ar[i][j] << " ";
        cout  << '\n';
    }

}
