/*
@author: Alok Negi
@time: 18 Apr 2019  10:03

Question: Ap Series
*/
#include<iostream>
using namespace std;
int main()
{
    int a, d, n;
    int sum=0;
    cin>>a>>d>>n;
    for( int i = 0; i < n; i++ )
    {
        sum+=a+i*d;
    }
    cout<<sum;
}
