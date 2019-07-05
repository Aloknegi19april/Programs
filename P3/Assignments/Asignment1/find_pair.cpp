#include<bits/stdc++.h>
using namespace std;

void find_Pair(vector<int> Ar, int n, int k)
{
    for(int i = 0; i < n; i++)
        for(int j = 0; j < n; j++)
                if(Ar[i]+Ar[j] == k)
                {
                    cout << "("<< Ar[i] <<" , "<< Ar[j] << ")" <<"\n";
                    return;
                }
    cout << "-1" << "\n";
}

int main()
{
    int n;
    cin >> n;

    int k;
    cin >> k;

    vector <int> Ar(n);
    for(int i = 0; i < n; i++)
        cin >> Ar.at(i);

    find_Pair(Ar, n, k);
}
