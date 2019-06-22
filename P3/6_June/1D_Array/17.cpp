#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int Ar[8] = {0};
    int i=7;
    while(n)
    {
        Ar[i] = n%2;
        n=n/2;
        i--;
    }
    for(int i = 0; i < 8; i++)
    {
        cout << Ar[i];
    }
}
