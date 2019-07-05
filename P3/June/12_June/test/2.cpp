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
    int start_col1, start_row1;
    while(k!=2*n-1)
    {
        if(k%2==0)
        {
            if(k<n)
                start_row = k;
            else
                start_row = n-1;

            if(k<n)
                start_col = 0;
            else
                start_col = k-n +1;

            for( ; start_row < n && start_col < n && start_col>=0 &&start_row>=0; start_row=start_row-1, start_col=start_col+1)
                cout << Ar[start_row][start_col] << " ";

        }
        else
        {
            if(k<n)
                start_row1 = 0;
            else
                start_row1 = k-n+1;

            if(k<n)
                start_col1 = k;
            else
                start_col1 = n-1;

            for( ; start_row1 < n && start_col1 < n && start_col1>=0 &&start_row1>=0; start_row1++, start_col1--)
                cout << Ar[start_row1][start_col1] << " ";

        }
        k++;
    }
}
