/*
Question :  Reverse every sub-array of k-grou
*/

#include<bits/stdc++.h>
using namespace std;
void reverse(int *Ar, int start, int last)
{
    int temp;
    for(int i =  start; i < last; i++)
    {
        temp = Ar[i];
        Ar[i] = Ar[last-i-1];
        Ar[last-i-1] = Ar[i];
    }
}
void rev(int *Ar,int n, int k)
{
    int p = 0, q = k;
    while(p < n)
    {
        reverse(Ar,p,q);
        p+=k;
        q+=k;
    }

    for(int i = 0; i < n; i++)
    {
        cout << Ar[i]<<" ";
    }
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
    int k;
    cin >> k;
    rev(Ar, n, k);
}
