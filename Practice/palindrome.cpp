#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    int n,i,rev=0,digit;
    cin >> n;
    int temp=n;
    while(n>0)
    {
        digit=n%10;
        rev=10*rev+digit;
        n=n/10;
    }
    if(n==rev)
    {
        std::cout << "palindrome" << '\n';
    }
    else
    {
        std::cout <<"not palindrome";
    }
}
