/*
    prefixes */

#include<bits/stdc++.h>
using namespace std;

int main()
{
    string str = "abcdef";
    int i = 0;
    int len = str.length();
    for(int  j = 1; j <= len-i; j++)
        cout << str.substr(i,j) <<" " ;
}
