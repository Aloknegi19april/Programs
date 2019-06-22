#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;

    int i, limit = n;
    int flag = 0, c=0;
    for( i = 2; i <= limit/2; i++)
    {
        while( n % i == 0)
        {
            flag = 1;
            n=n/i;
        }
        if(flag == 1)
            c++;
        flag = 0;
    }
    if(c == 2)
    {
        cout << "Semi Prime";
    }
    else
    {
        cout << "Not Semi Prime";
    }
}
