#include<bits/stdc++.h>
using namespace std;

int gcd(int a, int b)
{
    if(a==0)
        return b;
    return( b%a, a);
}

int main()
{
    vector<int> num = {1,2,3,4};
    vector<int> den = {2,4,6,8};

    int n = 1;
    int d = 1;

    for(int i = 0; i < num.size(); i++)
    {
        n *= num[i];
        d *= den[i];
    }

    cout <<"  " << n / gcd(n,d) << endl;
    cout << "------" << endl;
    cout <<"  " << d / gcd(n,d) << endl;

}
