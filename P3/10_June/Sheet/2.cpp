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
    for(int i = 0; i < n; i++)
    {
        if(s[i]>='0'&&s[i]<='9')
        {
            count++;
        }
    }
    cout << count;

}
