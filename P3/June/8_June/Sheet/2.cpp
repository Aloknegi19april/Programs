#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int Ar[n], c[n]={0};
    for(int i = 0; i < n; i++)
    {
        cin >> Ar[i];

    }
    for(int i = 0; i < n; i++)
    {
        for(int j = i; j < n; j++)
        {
            if(Ar[i]==Ar[j] && Ar[i]!=-1)
            {
                c[i]++;
                if(c[i]>1)
                    Ar[j] = -1;
            }
        }
    }
    for(int i = 0; i < n; i++)
    {
        if(c[i]>0)
            cout << Ar[i] <<" : "<<c[i] <<"\n";
    }
}
