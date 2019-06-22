#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>> n;
    int Ar[n];
    for(int i = 0; i < n; i++)
    {
        cin >> Ar[i];
    }
    int temp;
    for(int i = 0; i < n; i++)
    {
        if(Ar[i] == 0 && i % 2 != 0)
        {
            for(int j = i+1; j < n; j++)
            {
                if(Ar[j] == 1 && j % 2 == 0)
                {
                    temp = Ar[i];
                    Ar[i] = Ar[j];
                    Ar[j] = temp;
                }
            }
        }
        if(Ar[i] == 1 && i % 2 == 0)
        {
            for(int j = i+1; j < n; j++)
            {
                if(Ar[j] == 0 && j % 2 != 0)
                {
                    temp = Ar[i];
                    Ar[i] = Ar[j];
                    Ar[j] = temp;
                }
            }
        }
    }

    for(int i = 0; i < n; i++)
    {
        cout << Ar[i] << " ";
    }
}
