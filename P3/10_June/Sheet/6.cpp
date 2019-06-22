#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n;
    cin >> n;
    char s[n],temp;
    cin >> s;
    int count = 0;
    for(int i = 0; i <= n/2; i++)
    {
        temp = s[i];
        s[i] =s[n-i-1];
        s[n-i-1]=temp;
    }
    cout << s;

}
