#include<bits/stdc++.h>
using namespace std;

int fact(int n)
{
    if(n == 0)
        return 1;
    if(n == 1)
        return 1;

    return n * fact(n-1);
}


int main()
{
    string s = "aabb";
    int len = s.length();
    int count[26] = {};
    for(int i = 0; i < len; i++)
    {
        count[s[i] - 'a']++;
    }
    int d = 1;
    for(int i = 0; i < 26; i++)
    {
        if(count[i]!=0)
        {
            d*= fact(count[i]);
        }
    }

    cout << fact(len)/d;
}
