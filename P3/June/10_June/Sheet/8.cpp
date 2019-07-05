#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    string s;
    cin >> s;
    int max = 0,len = s.length();
    int count = 0,index;
    for(int i = 0; i < len; i++)
    {
        if(s[i]>='0'&&s[i]<='9')
        {
            count++;
            if(count > max)
            {
                max=count;
                index = i;

            }
        }
        else
            count = 0;
    }
    for(int i = index-max; i < index; i++)
    {
        cout << s[i];
    }

}
