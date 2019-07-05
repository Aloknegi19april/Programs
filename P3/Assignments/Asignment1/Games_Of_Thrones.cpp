#include<bits/stdc++.h>
using namespace std;

bool check_Palindrome(string s)
{
    int len = s.length();

    int count[26] = {};
    for(int i = 0; i < len; i++)
        count[s[i]-'a']++;

    int c = 0;
    for(int i = 0; i < 26; i++)
    {
        if(count[i]%2!=0)
            c++;
    }
    if(c <= 1)
        return 1;
    else
        return 0;
}

int main()
{
    string s;
    cin >> s;

    if(check_Palindrome(s))
        cout << "YES";
    else
        cout << "NO";
}
