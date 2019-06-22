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
        if(Ar[i] > max2)
        {
            max = Ar[i];
        }
    }
    for(int i = 0; i < n; i++)
    {
        if(Ar[i] > max2)
        {
            if(Ar[i] < max)
            {
                max2 = Ar[i];
            }
        }
    }
    for(int i = 0; i < n; i++)
    {
        if(Ar[i] == max2)
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
