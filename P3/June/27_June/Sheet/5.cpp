#include<bits/stdc++.h>
using namespace std;

int main()
{
    string str = "This is a test string";
    int len = str.length();
    int max = INT_MIN, min = INT_MAX;
    int count = 0;
    string s = "";
    for(int i = 0; i < len; i++)
    {
        s.push_back(str[i]);
        count++;
        if(str[i] == ' ')
        {
            count--;
            if(count > max)
            {
                max = count;
            }
            if(count < min)
            {
                min = count;
            }
            count = 0;
        }
    }
}
