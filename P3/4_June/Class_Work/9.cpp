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
    int min = INT_MAX;

    for(int i = 0; i < n; i += 2)
    {
        if(Ar[i]<Ar[i+1])
        {
            if(Ar[i+1]>max)
            {
                max = Ar[i+1];
            }
        }
        else
        {
            if(Ar[i]<min)
            {
                min = Ar[i];
            }
        }
    }
    cout << max <<" " << min;
    
}
