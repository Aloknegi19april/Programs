#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int temp , sum = 0,i=0;
    while(n)
    {
        temp = n%10;
        sum += temp*pow(2,i);
        i++;
        n=n/10;
    }
    cout << sum;
}
