#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    string s;
    cin >> s;
    int len = s.length(),c=0,c1=0,c2=0;
    for(int i = 0; i<len; i++)
    {
        if(s[i]>='0'&&s[i]<='9'||s[i]=='.'||s[i]=='e'||s[i]=='-')
        {
            if(s[i]=='.')
            {
                c++;
            }
            if(s[i]=='e')
            {
                c1++;
            }

            if(s[i]=='-')
            {
                c2++;
            }

        }
    }
    if(c>0&&c<2&&c1<2&&c2<2)
    {
        cout<< "Valid";
    }
    else
    {
        std::cout << "Invalid" << '\n';
    }

}
