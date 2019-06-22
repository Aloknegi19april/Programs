#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n;
    cin >> n;
    char s[n];
    cin >> s;
    int count = 0;
    for(int i = 0; i <= n/2; i++)
    {
        if(s[i]!=s[n-i-1])
        {
            cout << "Not Palindrome";
            return 0;
        }
    }
    cout << "Palindrome";

}
