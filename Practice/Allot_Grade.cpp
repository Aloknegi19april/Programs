#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int i;
    char ch;
    cin>>ch;
    switch(ch)
    {
        case 'A':
            cout << "Your percentage is greater than 90";
            break;
        case 'B':
            cout << "Your percentage is greater than 80 But less than 90";
            break;
        case 'C':
            cout << "Your percentage is greater than 70 But less than 80";
            break;
        case 'D':
            cout << "Your percentage is greater than 60 But less than 70";
            break;
        case 'E':
            cout << "Your percentage is greater than 50 But less than 60";
            break;
        case 'F':
            cout << "Your percentage is greater than 40 But less than 50";
            break;
        deault:
             std::cout << "You are Fail" << '\n';
             break;
    }
}
