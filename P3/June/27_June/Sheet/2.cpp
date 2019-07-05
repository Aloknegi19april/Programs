#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s = "11611";
    int len = s.length();

    for(int i = 0; i < len; i++)
        for(int j = 1; j <= len-i; j++)
        {
            string str = s.substr(i,j);
            int x = stoi(str);
            if(x%6==0)
                cout << s.substr(i,j) << " ";
        }
}
