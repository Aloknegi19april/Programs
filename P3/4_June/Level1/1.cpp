#include<bits/stdc++.h>
using namespace std;
int main()
{
    int Ar[9],fact =1;

    int n;
    cin >> n;
    int sum = 0;
    while(n)
    {
        fact=1;
        int temp = n % 10;
        for(int i = 1; i <= temp; i++)
        {
            fact=fact*i;
        }
        sum+=fact;
        n=n/10;
    }
    cout << sum;
}
