#include<bits/stdc++.h>
using namespace std;
int main()
{
    stack <int> s;
    stack <int> s1;
    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);
    s.push(50);
    s.push(60);

    s1.push(10);
    s1.push(20);
    s1.push(30);
    s1.push(40);
    s1.push(50);
    s1.push(60);

    while(!s.empty()&&s1.empty())
    {
        if(s.top()==s1.top())
        {
            s.pop();
            s1.pop();
        }
        else
        {
            cout<<"Not same";
            return 0;
        }
    }

    cout << "same";
}
