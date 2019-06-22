/*
@author: Alok Negi
@time: 18 Apr 2019  10:03

Questio: e^x = 1-x/1! + x^2/2!.....
*/
#include<iostream>
using namespace std;
int main()
{
    float sum=1,term=1,expo=1e-5;
    int i=1,x;
    cin>>x;
    while(term>expo)
    {
        term=(term*x)/i;
        if(i%2!=0)
        {
            term=term*(-1);
            sum+=term;
            term=term*(-1);
        }
        else
            sum+=term;
        i++;

    }
    cout<<sum;
}
