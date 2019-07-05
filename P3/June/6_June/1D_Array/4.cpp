#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int Ar[n];
    for(int i = 0; i < n; i++)
    {
        cin >> Ar[i];
    }
    int a, b;
    cin >> a >> b;
    int count =0;
    for(int i = 0; i < n; i++)
    {
        if(Ar[i] >= a && Ar[i] <= b)
        {
            count++;
        }
    }
    cout << count;
}
