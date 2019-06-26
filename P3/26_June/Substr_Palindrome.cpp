#include<bits/stdc++.h>
using namespace std;

bool is_palindrome(string str,int start, int len)
{
    if(start > len)
        return 1;
    if(str[start]==str[len])
        return is_palindrome(str,start+1,len-1);
    else
        return 0;
}

int main()
{
    string str = "abcdefedcba";
    int len = str.length();
    int k = 5;
    for(int i = 0; i < len; i++)
        for(int j = 1; j <= len-i; j++)
        {
            string str2 = str.substr(i,j);
            int len1 = str2.length();
            if(len1 == k)
                if(is_palindrome(str2,0,len1-1))
                    cout << str.substr(i,j)<< endl;
        }
}
