#include<bits/stdc++.h>
using namespace std;

void sum_pair(int *Ar, int start,int check, int end, int k)
{
    if(check>end)
        return;
    if(Ar[start]+Ar[check]==k)
        cout << Ar[start] <<" "<<  Ar[check]<<"\n";
    return sum_pair(Ar,start,check+1,end,k);

}

int main()
{
    int n;
    cin>> n;
    int Ar[n];
    for(int i = 0; i < n; i++)
    {
        cin >> Ar[i];
    }
    int start = 0;
    int end = n;
    int k;
    cin >> k;
    for(int i = 0; i < end; i++)
    {
        sum_pair(Ar,i,i+1,end,k);
    }
}
