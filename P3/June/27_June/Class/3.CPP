#include<bits/stdc++.h>
using namespace std;

int main()
{
    string str = "ababa";
    string str2 ="";
    int count = 0;
    int len = str.length();
    for(int i = 0; i < len; i++)
        for(int j = 1; j <= len-i; j++)
            if(str.find(str.substr(i,j))==i)
                count++;

    cout << count;
}
