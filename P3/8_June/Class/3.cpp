/*
Question : Equillibrium
*/

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int Ar[n];
    for(int i = 0; i < n; i++)
    {
        cin >> Ar[i];
    }
    int leftsum = Ar[0], rightsum = 0;
    for(int i = 2; i < n; i++)
    {
        rightsum+=Ar[i];
    }
    if(leftsum == rightsum)
    {
        cout << Ar[1];
    }
    for(int i = 2; i < n-1; i++)
    {
        leftsum+=Ar[i-1];
        rightsum-=Ar[i];

        if(leftsum == rightsum)
        {
            cout << Ar[i];
            break;
        }
    }
}
