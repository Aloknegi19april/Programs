#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    char s[20];
    gets(s);
    int count = 1,len = strlen(s);
    for(int i = 0; i < len; i++)
    {
        if(s[i] == 32)
        {

            count++;
        }
    }
    cout << count;

}
