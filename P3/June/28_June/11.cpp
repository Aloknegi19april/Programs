#include<bits/stdc++.h>
using namespace std;
int main()
{

    std::vector<int> v={1,2,3,-3,-1,6,7,-2,-5};

    for(int i = 0; i < v.size(); i++ )
    {
        if(v.at(i)<0)
            {
                cout << v.at(i) << " " << endl;
                v.erase(v.begin()+i);
                i--;
            }
    }

    for(int i = 0; i < v.size(); i++ )
    {
        cout << v.at(i)<<" ";
    }
}
