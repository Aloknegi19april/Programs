#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int Ar[n];
    for(int i = 0; i < n; i++)
        cin >> Ar[i];

    int c[100] = {0};
    int flag1 = 0;
    for(int i = 0; i < n; i++)
    {
        c[Ar[i]]++;
        if(c[Ar[i]] > 1)
        {
            flag1 = 1;
            break;
        }
    }
    int flag = 0;
    for(int  i = 0; i < n; i++)
    {
        if(Ar[i] > Ar[i+1])
        {
            flag = 1;
            break;
        }
    }
    int count = 0;
    for(int i = 0; i < n; i++)
    {
        if(Ar[i] >= 1 || Ar[i] <= n)
        {
            count++;
        }
    }

    if(count == n && flag == 1 && flag == 1 )
        cout << "Beautiful" ;
    else
        cout << "Ugly";

    return 0;
}
