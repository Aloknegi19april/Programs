#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int max = INT_MIN;
    int Ar[n];

    for(int i = 0; i < n; i++)
    {
        cin >> Ar[i];
        if(Ar[i]==0||Ar[i]==-1)
        {
            break;
        }
        if(Ar[i]>max)
        {
            max = Ar[i];
        }
    }
    cout << max;
}
