/*
Question : List pairs of factors
*/

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >>  n;

    int limit = sqrt(n);
    for(int i = 1; i <= limit; i++)
    {
        if( n % i == 0)
        {
            cout << "(" << i << " , " << n/i << ")" << endl;
        }
    }
}
