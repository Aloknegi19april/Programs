/*
@author: Alok Negi
@time: 21 Apr 2019  10:03

Questio: Sin x = 1-x3/3! + x^5/5!.....
*/
#include<iostream>
using namespace std;
int main()
{
    float sum,term;
    int i ,x,n,fact=1,flag=0;
    cin>>x;
    cin>>n;
    term=x;
    for( i = 1; i < 2*n; i = i+2 )
    {

        fact=fact*(i);
        if( flag == 0 )
        {
            sum += term/fact;
            flag=1;
        }
        else
        {
            sum += (-1*term)/fact;
            flag=0;
        }
        fact*=fact*(i+1);
        term=term*x*x;
        cout<<sum<<" ";
    }
    cout<<"\n"<<sum;
}
