#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int Ar[n], Br[n], Cr[n];
    for(int i = 0; i < n; i++)
    {
        cin >> Ar[i];
    }
    for(int i = 0; i < n; i++)
    {
        cin >> Br[i];
    }
    int i =0,j=0,k=0;
    while(i < n && j < n)
    {
        if(Ar[i] < Br[j])
        {
            Cr[k]=Ar[i];
            i++;
            k++;
        }
        else
        {
            Cr[i]= Br[j];
            j++;
            k++;
        }
    }
    while(i < n)
    {
        Cr[k] = Ar[i];
        i++;
        k++;
    }
    while(j < n)
    {
        Cr[k] = Br[j];
        j++;
        k++;
    }
    for(int i = 0; i < n+n; i++)
    {
        cout << Cr[i]<< " ";
    }
}
