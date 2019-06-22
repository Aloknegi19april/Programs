/*
Stock
*/


#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int Ar[n],a,b;
    int min = INT_MAX, max = INT_MIN;
    for(int i = 0; i < n; i++)
    {
        cin >>Ar[i];
    }
    min = 0;
    max = Ar[0];
    for(int i = 1; i < n; i++)
    {
        if(Ar[i]>=max)
        {
            a = min;
            b = i;
            max = Ar[i];
            if(i==n-1)
            {
                cout << "("<<a<<","<<b <<")" <<" ";
            }
        }
        else
        {
            cout << "("<<a<<","<<b <<")" <<" ";
            min = i;
            max = Ar[i];
        }

    }
}
