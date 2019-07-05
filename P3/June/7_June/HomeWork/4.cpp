/*
Reverse an array
*/

#include<bits/stdc++.h>
using namespace std;
int reverse(int *Ar , int start, int last)
{
    if( last <= start)
        return 0;
    int temp;
    temp = Ar[start];
    Ar[start] = Ar[last];
    Ar[last] = temp;
    return reverse(Ar, start+1, last-1);
}

int main()
{
    int n;
    cin >> n;
    int Ar[n];
    for(int i = 0; i < n; i++)
    {
        cin >> Ar[i];
    }
    int start =0;
    int last = n-1;
    reverse(Ar,start,last);
    for(int i = 0; i < n; i++)
    {
        cout << Ar[i] << " ";
    }
}
