#include<bits/stdc++.h>
using namespace std;

int gcd(int a, int b)
{
    if(a==0)
        return b;
    return gcd(b%a, a);
}

int main()
{
    vector<int> arr = {2,4,6,10};
    int g = gcd(arr[0],arr[1]);
    for(int i = 2; i < arr.size(); i++)
        g = gcd(arr[i], g);
    cout << g;
}
