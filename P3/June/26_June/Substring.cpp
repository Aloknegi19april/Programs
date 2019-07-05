#include<bits/stdc++.h>
using namespace std;

int main()
{
    string str = "abcd";
    int len = str.length();
    for(int i = 0; i < len; i++)
        for(int j = 1; j <= len-i; j++)
            cout << str.substr(i,j)<< endl;
}
