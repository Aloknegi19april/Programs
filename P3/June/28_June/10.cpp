#include<bits/stdc++.h>
using namespace std;
int main()
{
    std::vector<int> v = {3,9,10,8};
    std::vector<int> v2 = {3,9,11};
    std::vector<int> v3(v2.size());
    vector<int>::iterator it, it1, st;

    it = set_intersection(v.begin(),v.end(), v2.begin(), v2.end(), v3.begin());

    for(int i = 0; i < v3.size(); i++)
        cout << v3.at(i)<<" ";
}
