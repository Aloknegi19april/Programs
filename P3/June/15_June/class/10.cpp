#include<bits/stdc++.h>
using namespace std;

int main()
{
    stack <char> s,s1;
    char str[] = "(3+4)*7-2*8/3";
    int len = strlen(str);
    for(int i = 0; i < len; i++)
    {
        if(str[i]=='('||str[i]=='+'||str[i]=='-'||str[i]=='*'||str[i]=='/')
        {
            s.push(str[i]);
        }
        if(str[i]==')')
        {
            cout<<s.top()<<"\n";
            s.pop();
            cout<<s.top()<<"\n";
            while(s.top()!='(')
            {
                s1.push(str[i]);
                s.pop();
            }
            s.pop();

        }
        else
        {
            s1.push(str[i]);
        }
    }

    while(!s.empty())
    {
        s1.push(s.top());
        s.pop();
    }

    while(!s1.empty())
    {
        cout << s1.top()<<" ";
        s1.pop();
    }
}
