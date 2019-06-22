/*
Question : Leader in an array
*/

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;

    int Ar[n];
    for(int i = 0; i < n; i++)
    {
        cin >> Ar[i];
    }

    int max = INT_MIN;
    for(int i = n-1; i >= 0; i--)
    {
        if(Ar[i] > max)
        {
            max = Ar[i];
            cout << max << " ";
        }
    }
}
