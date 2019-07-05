/*
Question : check element
*/

#include<bits/stdc++.h>
using namespace std;

void check_element(int *Ar, int n)
{
    int i,flag;
    for( i = 1; i < n - 1; i++)
    {
        flag = 0;
        for(int j = 0; j <= i-1; j++)
        {
            if(Ar[i] < Ar[j])
            {
                flag=1;
                break;
            }
        }
        for(int j = i +1; j < n; j++)
        {
            if(Ar[j]>Ar[i])
            {
                flag = 1;
                break;
            }
        }
        if(!flag)
        {
            cout << Ar[i];
            break;
        }
    }
    if(flag)
        cout << "No such element";

}

int main()
{
    int n;
    cin >> n;
    int Ar[n];
    for(int i = 0; i < n; i++)
    {
        cin >> Ar[i];
    }
    check_element(Ar,n);
}
