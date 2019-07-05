#include<bits/stdc++.h>
using namespace std;

int main()
{
    vector <int> a = {16,3,40,4,5,10,15,20};

    for(auto j = a.begin(); j < a.end(); j++)
    {

        if(j!=min_element(j,a.end()))
            swap(*j,*min_element(j,a.end()));
    }

    for(int i = 0; i < a.size(); i++)
        cout << a[i] <<" ";

}
