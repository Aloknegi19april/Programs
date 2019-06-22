/*
@author: Alok Negi
@time: 21 Apr 2019

Question: GP Series
*/
#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    int a, r, d, n,term=1;
    int sum=0;
    cin >> a >> d >> r >> n;
    sum = a;
    for( int i = 1; i < n; i++ )
    {
        term = term * r;
        sum += ( a + i*d ) * term;
        cout<<sum<<" ";
    }
    cout<<"\n"<<sum;
}
