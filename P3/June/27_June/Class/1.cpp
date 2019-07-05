/*
Panagram checking */

#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s = "the quick brown fox jumps over the lazy dog";
    int len = s.length();
    int C[26]={};
    for(int i = 0; i < len; i++)
    {
        C[s[i]-'a']++;
    }

    int flag = 0;
    for(int i = 0; i < 26; i++)
    {
        if(C[i] == 0)
        {
            cout << "Not a Panagram";
            flag = 1;
            break;
        }
    }
    if(flag == 0)
        cout << "Panagram";

}
