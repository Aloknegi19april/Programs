#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    int n , i=0, j,Ar[100];
    cin >> n ;
    while(n>0)
    {
        Ar[i]=n%2;
        n=n/2;
        i++;
    }
    for( j = i-1; j>=0; j-- )
    {
        std::cout << Ar[j] << ' ';
    }
}
