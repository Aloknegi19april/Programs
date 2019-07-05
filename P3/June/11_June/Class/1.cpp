/*
kth Diagonal */

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

    int k = 0;
    int start_col, start_row;
    while(k!=2*n-1)
    {
        if(k<n)
            start_row = k;
        else
            start_row = n-1;

        if(k<n)
            start_col = 0;
        else
            start_col = k-n +1;

        for( ; start_row < n && start_col < n && start_col>=0 &&start_row>=0; start_row--, start_col++)
            cout << Ar[start_row][start_col] << " ";

        k++;
    }
}
