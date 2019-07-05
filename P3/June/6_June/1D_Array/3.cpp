#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int Ar[n];
    int mean = 0;
    for(int i = 0; i < n; i++)
    {
        cin >> Ar[i];
        mean+=Ar[i];
    }
    mean = mean / n;
    int count = 0;
    for(int i = 0; i < n; i++)
    {
        if(Ar[i] > mean)
        {
            count++;
        }
    }
    cout << count;
}
