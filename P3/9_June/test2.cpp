/*
Stock
*/


#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a;
    cin >>a;
    int n;
    cin >> n;
    int Ar[n];
    for(int i = 0; i < n; i++)
    {
        cin >> Ar[i];
    }
    int i,j,Br[3][3],arr[9];
    for(i = 9; i >= 0; i--)
    {
        arr[i] = a%10;
        a=a/10;
    }
    for(int index = 0; index < 3; index++)
    {
        i = index /3;
        j = index %3;
        Br[i][j]=arr[index];
    }
    for(int i = 0; i < 3; i++)
    {
        for(int j = 0; j < 3; j++)
        {
            cout << Br[i][j]<<" ";
        }
        std::cout  << '\n';
    }
    /*
    int t = 0;
    for(i = 1; i < n ; i++)
    {
        for(j = 0; j < 3; j ++)
        {
            for(int k = 0; k < 3; k++)
            {
                if(Ar[i+1] == Br[j][k] && abs(c-i)<=1&&abs(d-j)<=1)
                {
                    t+=2;
                    c=i;
                    d=j;
                }
                else
                {
                    t+=4;
                    c=i;
                    d=j;
                }
            }
        }
    }
    cout << t;

    */
}
