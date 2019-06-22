/*
without consecutive 1's */

#include<bits/stdc++.h>
using namespace std;

void gString(char *str,int present, int end)
{
    if(present == end)
    {
        str[present] ='\0';
        cout << str<<" ";
        return;
    }

    if(str[present-1]=='1')
    {
        str[present] = '0';
        gString(str,present+1,end);
    }
    else
    {
        str[present]= '0';
        gString(str,present+1,end);
        str[present]='1';
        gString(str,present+1,end);
    }
}

int main()
{
    int k;
    cin >> k;
    char str[k+1];
    str[0] = '0';
    gString(str,1,k);
    str[0]='1';
    gString(str,1,k);
}
