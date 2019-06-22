#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t;
    long long int n, m, s;
    cin>>t;
    while (t--) {

        cin>>n>>m>>s;

        cout<<(m%n)-1+s<<"\n";
    }
}
