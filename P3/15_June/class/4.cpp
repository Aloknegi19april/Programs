#include<iostream>
#include<stack>
using namespace std;
int main()
{
    stack <int>s;
    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);
    s.push(5);
    s.push(6);

    cout << s.size()<<"\n";
    cout << s.top()<<"\n";
    s.pop();
    cout << s.size()<<"\n";
    cout << s.top()<<"\n";
    s.pop();
    cout << s.top()<<"\n";
    s.pop();

    cout << s.top()<<"\n";
    s.pop();
    cout << s.top()<<"\n";
    cout << s.empty()<<"\n";
    cout << s.size()<<"\n";
    s.pop();
    s.pop();
    cout << s.empty()<<"\n";
    s.push(10);
    cout << s.size()<<"\n";
    cout << s.top()<<"\n";
}
