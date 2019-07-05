#include<bits/stdc++.h>
using namespace std;

int main()
{
    string str = "your article is in queue";
    int len = str.length();

    for(int i = 0; i < len; i++)
        if((str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u'))
            while(str[i+1]=='a'||str[i+1]=='e'||str[i+1]=='i'||str[i+1]=='o'||str[i+1]=='u')
                str.erase(i+1,1);

    cout << str;
}
