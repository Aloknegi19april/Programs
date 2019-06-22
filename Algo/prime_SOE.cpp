#include<bits/stdc++.h>
using namespace std;
long int n = 999999999;
bool prime[1000000000];
void sieve(long int n)
{
    prime[n+1];
    memset(prime, true, sizeof(prime));

    for(int i = 2; i*i<=n; i++)
    {
        if(prime[i]==true)
            for(int j = i*i; j <= n;j+=i)
                prime[j]=false;
    }

    for(int i = 2; i <= n; i++)
        if(prime[i])
            cout << i<<" ";
}


int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    sieve(n);
}
