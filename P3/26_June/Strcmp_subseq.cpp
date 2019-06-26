#include<bits/stdc++.h>
using namespace std;

int main()
{
    string str = "abcdefgh";
    string str2 ="def";
    int len = str.length();
    for(int i = 0; i < len; i++)
        for(int j = 1; j <= len-i; j++)
        {
            if(strcmp(str2,str.substr(i,j)))
                cout << str.substr(i,j)<< endl;
        }


}
