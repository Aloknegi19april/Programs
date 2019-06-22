#include<bits/stdc++.h>
using namespace std;

int main()
{
    char c[]="}";
    int len = strlen(c);
    stack <char> s;

    for(int i = 0; i < len; i++)
    {
        if(c[i]=='('||c[i]=='{'||c[i]=='[')
        {
            s.push(c[i]);
        }
        else
        {
            if(s.empty())
                {
                    s.push(c[i]);
                }
            char temp = s.top();
            s.pop();
            if(c[i]==')')
            {
                if(temp!='(')
                    {
                        cout << "false";
                        break;
                    }

            }
            if(c[i]==']')
            {
                if(temp!='[')
                    {
                        cout << "false";
                        break;
                    }

            }
            if(c[i]=='}')
            {
                if(temp!='{')
                {
                    cout << "false";
                    break;
                }

            }

        }
    }

    if(s.empty())
    {
        cout<<"balanced";
    }
    else
    {
        cout<<"unbalanced";
    }


}
