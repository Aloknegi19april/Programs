/*
Question : 3rd max in an array
*/

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;

    int Ar[n];
    for(int i = 0; i <= n; i++)
    {
        cin >> Ar[i];
    }
    int t;
    int max = Ar[0], max2= Ar[1], max3 = Ar[3] ;
    if(max < max2 && max3 < max2)
    {
        t = max;
        max = max2;
        max2 = t;
    }
    if(max<max3)
    {
        t = max;
        max = max3;
        max3 = t;
    }

    for(int i = 3; i < n; i++)
    {
        if(Ar[i] > max)
        {
            max= Ar[i];
        }
        else if(Ar[i]> max2)
        {
            max2=Ar[i];
        }
        else if (Ar[i]> max3)
        {
            max3 = Ar[i];
        }
    }

    cout << max3;
}
