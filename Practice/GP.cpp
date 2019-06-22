/*
@author: Alok Negi
@time: 18 Apr 2019  10:03

Question: GP Series
*/
#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    int a, r, n,term=1;
    int sum=0;
    cin>>a>>r>>n;
    sum=a;
    for( int i = 1; i < n; i++ )
    {
        term=term*r;
        sum+=a*term;
    }
    cout<<sum;
}
