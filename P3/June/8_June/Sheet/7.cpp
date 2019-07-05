#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, m;
    cin >> n ;
    int Ar[n], c[10]={0};

    for(int i = 0; i < n; i++)
        cin >> Ar[i];



    for(int i = 0; i < n; i++)
        for(int j = i; j < n; j++)
        {
            if(Ar[i] == Ar[j])
            {
                if(c[Ar[i]] > 1)
                    Ar[j] = -1;

                c[Ar[i]]++;

            }
        }


    for(int i = 0; i < n; i++)
        if(Ar[i] > -1)
            cout << Ar[i] << " ";


}
