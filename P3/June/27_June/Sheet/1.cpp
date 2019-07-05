#include<bits/stdc++.h>
using namespace std;
int main()
{
    string str , str2;
    cin >> str;
    cin >> str2;
    int len = str.length();
    int len2 = str.length();
    int n;
    if(len > len2)
        n = len;
    else
        n = len2;
    reverse(str.begin(), str.end());
    reverse(str2.begin(), str2.end());
    string str3;
    int c = 0, sum = 0;
    for(int i = 0;i <n; i++)
    {
        sum = str[i]-'0' + str2[i]-'0';
        sum+=c;
        str3.push_back(sum%10+'0');
        c = sum/10;
    }
    reverse(str3.begin(),str3.end());
    cout << str3;
}
