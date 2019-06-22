/*
Question : Prime no. */

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int limit = sqrt(n);

    for(int i = 2; i <= limit; i++)
    {
        if(n % i == 0)
        {
            cout<<"Not Prime";
            return 0;
        }
    }
    std::cout << "Prime Number" << '\n';
}
