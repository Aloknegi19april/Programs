#include<bits/stdc++.h>
using namespace std;

int main()
{
    vector <int> a = {1,4,5,10,15,20};
        cout << accumulate(a.begin(),a.end(),0) <<" ";
}
