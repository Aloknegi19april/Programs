#include<bits/stdc++.h>
using namespace std;

bool check_freq(string s, int len)
{
    int count[26] = {};

    for(int i = 0; i < len; i++)
    {
        count[s[i]-'a']++;
        if(count[s[i]-'a'] > 1)
            return 0;
    }
    return 1;
}

int main()
{
    string str = "abcdef";
    int len = str.length();
    int k = 2;
    for(int i = 0; i < len; i++)
        for(int j = 1; j <= len-i; j++)
        {
            string s = str.substr(i,j);
            int len = s.length();
            if(len == k)
                if(check_freq(s,len))
                    cout << s<<" ";
        }
}
