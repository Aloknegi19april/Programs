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

    for(int i = 0; i <= n/2; i++)
    {
        if(Ar[i] != Ar[n-i-1])
        {
            cout << "Not Palindrome";
            return 0;
        }
    }
    cout << "Palindrome";
}
