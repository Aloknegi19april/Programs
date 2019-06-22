#include<bits/stdc++.h>
using namespace std;
int main()
{
    stack <int> s;
    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);
    s.push(50);
    s.push(60);
    int min = INT_MAX;
    while(!s.empty())
    {
        if(s.top()<min)
            min = s.top();
        s.pop();
    }
    cout << min;
}
