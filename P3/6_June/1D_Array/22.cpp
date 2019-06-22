#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>> n;
    int Ar[n];
    int temp, br[n];
    int j = 0;
    for(int i = 0; i < n; i++)
    {
        cin >> Ar[i];
        temp = Ar[0];
        if(i>0)
        {
            br[j] = Ar[i];
        }
        j++;
    }
    br[n-1] = temp;
    for(int i = 0; i< n; i++)
    {
        cout << br[i] << " ";
    }
}
