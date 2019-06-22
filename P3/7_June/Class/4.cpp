/*
prime number
*/

#include<bits/stdc++.h>
using namespace std;

int isPrime(int n, int i)
{
    if(n==1)
        return 0;
    if( n== 2)
        return 1;
    if( n%i==0)
        return 0;
    if(i*i>n)
        return 1;
    return isPrime(n,i+1);
}

int main()
{
    int n;
    cin >> n;
    int i = 2;
    int a=isPrime(n,i);
    if(a==0)
    {
        cout <<"Not Prime";
    }
    else
    {
        std::cout << "Prime" << '\n';
    }
}
