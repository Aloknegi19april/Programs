#include<bits/stdc++.h>
using namespace std;

bool check_Sub(string s)
{
    int count[26]={};
    int len = s.length();
    for(int i = 0; i < len; i++)
    {
        count[s[i]-'a']++;
    }
    int c =0;
    for(int i = 0; i < 26; i++)
    {
            if(count[i] >= 1)
                c++;
    }
    if(c >= 5)
        return 1;
    else
        return 0;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    string str;
    cin >> str;
    int len = str.length();

    for(int i = 0; i < len; i++)
    {
        for(int j = i; j <= len - i; j++)
        {
            string sub = str.substr(i,j);

            if(check_Sub(sub) &&sub.length()!=len)
                cout << sub << endl;
        }
    }
}
