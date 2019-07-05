/*
Divisible by 7 */

#include<bits/stdc++.h>
using namespace std;

void gString(char *s, int start,int end)
{
    if(start==end)
    {
        s[start]='\0';
        if(atoi(s)%7==0)
        cout << s << " ";
        return;
    }

    for(int i = 0; i < 10; i++)
    {
        s[start] = '0' + i;
        gString(s,start+1,end);
    }
    std::cout  << '\n';
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int k;
    cin >> k;
    char s[k+1];
    gString(s,0,k);
}
