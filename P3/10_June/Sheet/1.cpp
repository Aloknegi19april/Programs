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

    for(int i = 0; i < n; i++)
    {
        if(s[i]>=97)
        {
            s[i]=s[i]-'a'+'A';
        }
    }
    cout << s;

}
