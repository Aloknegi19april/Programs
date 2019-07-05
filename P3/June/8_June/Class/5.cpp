/*
Question : Pythogorean Triplets
*/

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int Ar[n];
    for(int i = 0; i < n; i++)
        cin >> Ar[i];

    for(int i = 0; i <= n-1; i++)
        for(int j = 0; j <= n-1; j++)
            for(int k = 0; k <= n-1; k++)
                if(j!=i && i!=k &&j!=k)
                    if(Ar[i]*Ar[i] + Ar[j] * Ar[j] == Ar[k]* Ar[k])
                        cout << "true";

    cout << "false";

}
