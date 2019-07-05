#include<bits/stdc++.h>
using namespace std;

int main()
{
    cout<< "AZ" << " ";
    for(int i = 1; i <= 15; i++)
    {
        cout << char('A'+(i*2)) << char('Z'-(1*i))<<" ";
    }
}
