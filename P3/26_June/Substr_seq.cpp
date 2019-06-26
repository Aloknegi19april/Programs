#include<bits/stdc++.h>
using namespace std;

int main()
{
    string str = "abcd";
    int len = str.length();
    for(int j = 1; j <= len; j++)
        for(int i = 0; i+j <= len; i++)
            cout << str.substr(i,j)<< endl;
}
