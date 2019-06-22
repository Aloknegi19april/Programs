#include<bits/stdc++.h>
using namespace std;

void reverseofArray(int *Ar,int start, int last)
{

    if(last <= start)
        return;
    int temp;
    temp = Ar[start];
    Ar[start]=Ar[last];
    Ar[last]=temp;

    return reverseofArray(Ar, start+1,last-1);
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
    int last = n-1;
    int start = 0;
    reverseofArray(Ar,start,last);
    for(int i = 0; i < n; i++)
    {
        cout << Ar[i]<<" ";
    }
}
