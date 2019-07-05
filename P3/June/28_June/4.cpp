#include<bits/stdc++.h>
using namespace std;

int main()
{
    vector <int> a = {1,4,5,10,15,20};
    reverse(a.begin(),a.end());
    for(int i = 0; i < a.size(); i++)
        cout << a[i] <<" ";
}
