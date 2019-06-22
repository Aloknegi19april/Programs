#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    int n, k, q;
    int Ar[100000],temp[100000],qu[500],i,j=0;

    cin>>n>>k>>q;

    for( i = 0; i < n; i++)
    {
        cin>>Ar[i];
        if(i<n-k)
        {
            temp[j]=Ar[i];
            j++;
        }
    }
    for( i = 0; i < q; i++)
    {
        cin>>qu[i];
    }
    int k1 =0;
    for( i = 0; i < j ; i++)
    {
        if(i==qu[k1])
        {
            cout<<temp[i]<<"\n";
            k1++;
        }
    }
    for( i = 0; i < n-j ; i++)
    {
        if(i==qu[k])
        {
            cout<<Ar[i]<<"\n";
            k++;
        }
    }

}
