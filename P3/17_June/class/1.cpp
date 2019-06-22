/*
Generating all string of {0,1}of length k
*/

#include<bits/stdc++.h>
using namespace std;

void gString(char *s, int k)
{
    if(k==-1)
    {
        cout << s<<" ";
        return;
    }
    s[k] = '0';
    gString(s,k-1);
    s[k] = '1';
    gString(s,k-1);
}

int main()
{
    int k;
    cin >> k;
    char str[k+1];
    str[k]='\0';
    gString(str, k-1);
}
