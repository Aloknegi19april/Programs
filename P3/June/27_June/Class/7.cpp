#include<bits/stdc++.h>
using namespace std;

int main()
{
    string str = "abcdef";
    int len = str.length();
    for(int  j = 0; j <= len; j++)
        cout << str.substr(j,len) <<" " ;
}
