#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int Ar[n],max2 = INT_MIN,max = INT_MIN;
    for(int i = 0; i < n; i++)
    {
        cin >> Ar[i];
    }
    int k;
    cin >> k;
    for(int i = 0; i < n; i++)
    {
        if(i == k)
        {
            int m = n-1;
            for(int j = i; j < m; j++ )
            {
                Ar[j] = Ar[j+1];
            }
        }
    }

    for(int i = 0; i < n-1; i++)
    {
        cout << Ar[i] << " ";
    }
}
