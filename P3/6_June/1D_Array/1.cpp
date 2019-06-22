#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int Ar[n];
    for(int i =0; i < n; i++)
    {
        cin >> Ar[i];
    }
    int key;
    cin >> key;
    for(int i = 0; i < n; i++)
    {
        if(Ar[i] == key)
        {
            cout << i;
            break;
        }
    }
}
