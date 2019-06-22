#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin>>t;
    const unsigned int m = 1000000007;
    while(t--)
    {
        int i,n;
        cin >> n;
        long int f=0;


        for ( i = 1; i <= n; i++ )
        {
            f = ((f + i)%m + (f * i)%m) % m;
        }
        cout<<f<<"\n";
    }

}
