#include<bits/stdc++.h>
using namespace std;

bool compare(string s1,string s2)
{
    return s1.size() < s2.size();
}

int main()
{
    string Arr[] = {"Raman" , "is","Monday"};
    sort(Arr,Arr+3,compare);
    for(int i = 0; i < 3; i++)
        cout << Arr[i]<<endl;
}
