#include<bits/stdc++.h>
using namespace std;

int main()
{
    string str = "This is a string";

    while(str.find(" ")!=string::npos)
    {
        int i = str.find(" ");
        str.erase(i,1);
    }
    cout << str;
}
