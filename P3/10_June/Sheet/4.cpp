#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    char s[20];
    cin >> s;
    int count[26] = {0};
    int max = 0,len = strlen(s);
    char a;
    for(int i = 0; i < len; i++)
    {
        count[s[i]-'a']++;
        if(count[s[i]-'a']>max)
        {
            a=s[i];
            max = count[s[i]-'a'];
        }
    }
    cout << a;

}
