#include<bits/stdc++.h>
using namespace std;

int palindrome(string s, int start, int last)
{
    if(last <= start)
        return 1;
    if(s[start] == s[last])

        return palindrome(s,start+1,last-1);
    else
        return -1;
}
int main()
{
    string s;
    cin >> s;
    int start = 0;
    int last = s.length()-1;
    int c = palindrome(s,start,last);
    if(c == 1)
    {
        cout << "palindrome";
    }
    else
    {
        cout << "Not palindrome";
    }
}
