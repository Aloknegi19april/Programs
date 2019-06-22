/*
Question : Counting inversions pairs in an array
*/


int count_inverted(int *Ar, int n)
{
    int count = 0;
    for(int i = 0; i < n-1; i++)
    {
        for(int j = i+1; j < n; j++)
        {
            if(Ar[i] > Ar[j])
                count++;
        }
    }
    return count;
}

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
    cout << count_inverted(Ar,n);
}
