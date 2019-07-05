#include<bits/stdc++.h>
using namespace std;

void gString(char *s, int start, int end)
{
    if(start==end)
    {
        s[start]='\0';
        cout << s<<" ";
        return;
    }

    s[start] = '0';
    gString(s,start+1,end);
    s[start]='1';
    gString(s,start+1,end);
 }

int main()
{
    int k;
    cin >> k;
    char str[k+1];
    gString(str,0,k);
}
