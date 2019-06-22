/*
Question : Powers of odd factors
*/

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;

    int limit = sqrt(n);
    int count_power;
    for(int i = 2; i <= limit; i++)
    {
        count_power = 0;
        while(n % i == 0)
        {
            count_power++;
            n = n / i;
        }
        if(count_power)
            cout << i << "^" << count_power << "\n";
    }
}
