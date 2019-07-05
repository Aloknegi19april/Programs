#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int Ar[n], c[10]={0};
    int max = INT_MIN;
    for(int i = 0; i < n; i++)
    {
        cin >> Ar[i];
    }
    int k;
    cin >> k;

    for(int i = 0; i < n; i++)
    {
        for(int j = i; j < n; j++)
        {
            if(Ar[i] == Ar[j]&&Ar[j]!=-1)
            {
                c[i]++;
                if(c[i]==2)
                {
                    cout <<"\n"<< Ar[i];

                }
                if(c[i]>1)
                Ar[j]=-1;
            }
        }
    }
}
